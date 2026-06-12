#pragma once
#include <assert.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include <stddef.h>

typedef struct void_hashtable {
  uint64_t (*hash)(void const* data, size_t size, uint64_t seed);
  uint64_t seed;
  char * data;
  size_t count;
  size_t capacity;
  float loadfactor;
  uint16_t recordsize;
  uint16_t keysize;
  uint16_t valsize;
  uint16_t keyoffset;
  uint16_t valoffset;
} void_hashtable;

void* void_hashtable_ref(void_hashtable const * ht, uint64_t hash, void const * key);
void void_hashtable_grow(void_hashtable * ht);
void void_hashtable_set(void_hashtable * ht, uint64_t hash, void const * _key, void const * _val);
void void_hashtable_delete(void_hashtable * ht, uint64_t hash, void const * key);

#define hashtable(keytype, valtype) union { void_hashtable v; typeof(keytype)* K; typeof(valtype)* V; }
#define hashtable_record(ht) struct { uint64_t H; typeof(*(ht)->K) K; typeof(*(ht)->V) V; }
#define hashtable_create(ht, _hash, _loadfactor, _seed) \
  (typeof(*(ht))) { .v = { \
    .hash = (_hash), \
    .loadfactor = (_loadfactor), \
    .keysize = sizeof(*(ht)->K), \
    .valsize = sizeof(*(ht)->V), \
    .keyoffset = offsetof(hashtable_record(ht), K), \
    .valoffset = offsetof(hashtable_record(ht), V), \
    .recordsize = sizeof(hashtable_record(ht)), \
    .seed = (_seed), \
  } }

#define hashtable_at(ht, key) ({ \
    void_hashtable * _ht = &(ht)->v; \
    typeof(*(ht)->K)* _key = (typeof(*(ht)->K)[]){ key }; \
    (typeof(*(ht)->V)*)void_hashtable_ref(_ht, _ht->hash(_key, _ht->keysize, _ht->seed), _key); \
  })
#define hashtable_ref(ht, key) (*hashtable_at(ht, key))
#define hashtable_set(ht, key, val) ({ \
    typeof(*(ht)->K)* _key = (typeof(*(ht)->K)[]){ key }; \
    typeof(*(ht)->V)* _val = (typeof(*(ht)->V)[]){ val }; \
    void_hashtable * _ht = &(ht)->v; \
    void_hashtable_set(_ht, _ht->hash(_key, _ht->keysize, _ht->seed), _key, _val); \
  })
#define hashtable_delete(ht, key) ({ \
    typeof(*(ht)->K)* _key = (typeof(*(ht)->K)[]){ key }; \
    void_hashtable * _ht = &(ht)->v; \
    void_hashtable_delete(_ht, _ht->hash(_key, _ht->keysize, _ht->seed), _key); \
  })
#define hashtable_hashat(ht, hash, key) ({ \
    void_hashtable * _ht = &(ht)->v; \
    typeof(*(ht)->K)* _key = (typeof(*(ht)->K)[]){ key }; \
    (typeof(*(ht)->V)*)void_hashtable_ref(_ht, hash, _key); \
  })
#define hashtable_hashref(ht, hash, key) (*hashtable_hashat(ht, hash, key))
#define hashtable_hashset(ht, hash, key, val) ({ \
    typeof(*(ht)->K)* _key = (typeof(*(ht)->K)[]){ key }; \
    typeof(*(ht)->V)* _val = (typeof(*(ht)->V)[]){ val }; \
    void_hashtable * _ht = &(ht)->v; \
    void_hashtable_set(_ht, hash, _key, _val); \
  })
#define hashtable_hashdelete(ht, hash, key) ({ \
    typeof(*(ht)->K)* _key = (typeof(*(ht)->K)[]){ key }; \
    void_hashtable * _ht = &(ht)->v; \
    void_hashtable_delete(_ht, hash, _key); \
  })
#define hashtable_clear(ht) ({ \
    void_hashtable * _ht = &(ht)->v; \
    _ht->count = 0; \
    memset(_ht->data, 0, _ht->capacity * (size_t)_ht->recordsize); \
    (void)0; \
  })
#define hashtable_destroy(ht) ({ \
    void_hashtable * _ht = &(ht)->v; \
    _ht->count = 0; \
    _ht->capacity = 0; \
    free(_ht->data); \
    _ht->data = NULL; \
    (void)0; \
  })
#define hashtable_count(ht) ((ht)->v.count)

#define hashtable_foreach(ht, kptr, vptr) \
  for(typeof(ht) _ht = (ht), *_once0 = &_ht; _once0; _once0 = NULL) \
    for(typeof(_ht->K) kptr, *_once1 = &kptr; _once1; _once1 = NULL) \
      for(typeof(_ht->V) vptr, *_once2 = &vptr; _once2; _once2 = NULL) \
        for(intptr_t _i = 0; _i < _ht->v.capacity; _i++) \
          for(int _once3 = 1; (kptr = (void*)_ht->v.data + _i * (size_t)_ht->v.recordsize + _ht->v.keyoffset), _once3; _once3 = 0) \
            for(int _once4 = 1; (vptr = (void*)_ht->v.data + _i * (size_t)_ht->v.recordsize + _ht->v.valoffset), _once4; _once4 = 0) \
              if((*(uint64_t*)(_ht->v.data + _i * (size_t)_ht->v.recordsize)))

#ifdef HASHTABLE_IMPL
void* void_hashtable_ref(void_hashtable const * ht, uint64_t hash, void const * key) {
  hash = hash | (1ull << 63);
  intptr_t idx = hash & (ht->capacity - 1);
  void * ret = NULL;
  for(intptr_t poverty = 0; poverty < ht->capacity; poverty++) {
    char * slot = ht->data + idx * (size_t)ht->recordsize;
    uint64_t elem_hash = *(uint64_t*)slot;
    if(elem_hash == hash &&
       !memcmp(slot + ht->keyoffset, key, ht->keysize)) {
      ret = slot + ht->valoffset;
      break;
    }
    if(!elem_hash)
      return NULL;

    intptr_t elem_poverty = (idx - (intptr_t)(elem_hash & (ht->capacity - 1)) + ht->capacity) & (ht->capacity - 1);
    if (poverty > elem_poverty)
      return NULL;
    idx++;
    idx = idx & (ht->capacity - 1);
  }
  return ret;
}

static void void_hashtable_set_impl(void_hashtable * ht, uint64_t hash, void const * _key, void const * _val) {
  hash = hash | (1ull << 63);
  assert(ht->count < ht->capacity);

  intptr_t idx = hash & (ht->capacity - 1);
  char key[ht->keysize], val[ht->valsize];
  char tmpkey[ht->keysize], tmpval[ht->valsize];
  uint64_t tmphash;
  memcpy(key, _key, ht->keysize);
  memcpy(val, _val, ht->valsize);

  for(intptr_t poverty = 0; poverty < ht->capacity; poverty++) {
    char * slot = ht->data + idx * (size_t)ht->recordsize;
    uint64_t elem_hash = *(uint64_t*)slot;
    if(!elem_hash) {
      memcpy(slot, &hash, 8);
      memcpy(slot + ht->keyoffset, key, sizeof key);
      memcpy(slot + ht->valoffset, val, sizeof val);
      ht->count++;
      return;
    }
    if(elem_hash == hash &&
       !memcmp(slot + ht->keyoffset, key, ht->keysize)) {
      memcpy(slot + ht->valoffset, val, sizeof val);
      return;
    }
    intptr_t elem_poverty = (idx - (intptr_t)(elem_hash & (ht->capacity - 1)) + ht->capacity) & (ht->capacity - 1);
    if (poverty > elem_poverty) {
      memcpy(&tmphash, slot, 8);
      memcpy(tmpkey, slot + ht->keyoffset, sizeof key);
      memcpy(tmpval, slot + ht->valoffset, sizeof val);

      memcpy(slot, &hash, 8);
      memcpy(slot + ht->keyoffset, key, sizeof key);
      memcpy(slot + ht->valoffset, val, sizeof val);

      hash = tmphash;
      memcpy(key, tmpkey, sizeof key);
      memcpy(val, tmpval, sizeof val);

      poverty = elem_poverty;
    }
    idx++;
    idx = idx & (ht->capacity - 1);
  }
  assert(0);
}

void void_hashtable_grow(void_hashtable * ht) {
  if(ht->capacity == 0) {
    ht->capacity = 8;
    ht->data = calloc((size_t)ht->recordsize * ht->capacity, 1);
    return;
  }

  void_hashtable old = *ht;

  ht->count = 0;
  ht->capacity *= 2;
  ht->data = calloc((size_t)ht->recordsize * ht->capacity, 1);

  for(intptr_t i = 0; i < old.capacity; i++) {
    char * slot = old.data + i * (size_t)old.recordsize;
    uint64_t slot_hash = *(uint64_t*)slot;
    if(slot_hash)
      void_hashtable_set_impl(ht, slot_hash, slot + old.keyoffset, slot + old.valoffset);
  }
  free(old.data);
}

void void_hashtable_set(void_hashtable * ht, uint64_t hash, void const * _key, void const * _val) {
  hash = hash | (1ull << 63);
  if(ht->count >= (double)ht->loadfactor * ht->capacity)
    void_hashtable_grow(ht);

  void_hashtable_set_impl(ht, hash, _key, _val);
}

void void_hashtable_delete(void_hashtable * ht, uint64_t hash, void const * key) {
  hash = hash | (1ull << 63);
  intptr_t idx = hash & (ht->capacity - 1);
  char * deleteslot = NULL;
  for(intptr_t poverty = 0; poverty < ht->capacity; poverty++) {
    char * slot = ht->data + idx * (size_t)ht->recordsize;
    uint64_t elem_hash = *(uint64_t*)slot;
    if(elem_hash == hash &&
       !memcmp(slot + ht->keyoffset, key, ht->keysize)) {
      deleteslot = slot;
      break;
    }
    if(!elem_hash)
      return;

    intptr_t elem_poverty = (idx - (intptr_t)(elem_hash & (ht->capacity - 1)) + ht->capacity) & (ht->capacity - 1);
    if (poverty > elem_poverty)
      return;
    idx = (idx + 1) & (ht->capacity - 1);
  }
  memset(deleteslot, 0, 8);
  ht->count--;

  while(1) {
    char * oldslot = deleteslot;
    idx = (idx + 1) & (ht->capacity - 1);
    deleteslot = ht->data + idx * (size_t)ht->recordsize;
    uint64_t elem_hash = *(uint64_t*)deleteslot;
    if(!elem_hash)
      return;
    intptr_t elem_poverty = (idx - (intptr_t)(elem_hash & (ht->capacity - 1)) + ht->capacity) & (ht->capacity - 1);
    if(!elem_poverty)
      return;
    memcpy(oldslot, deleteslot, ht->recordsize);
    memset(deleteslot, 0, 8);
  }
}
#endif
