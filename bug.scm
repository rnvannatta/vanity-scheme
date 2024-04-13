; the bug:
; cps conversion accidentally tramples shadowings in multiple, multiple places
; surprised it took this long to burn me
; every place the continuation grows is a trample opportunity

; eg (to-cps `(begin ,x ,y) next) => (to-cps x `(continuation ignored ,(to-cps y next))) 

; two fixes:
; * insert a let binding every place the continuation grows
; --- ie (let ((next2 (gensym "next"))) `((lambda (,next2) ,(to-cps x next2)) (continuation ignored ,(to-cps y next))))
; * alpha convert it all

; alpha conversion sounds more tasty to me

(##vcore.multidefine
  (##vcore.load-library
   "_V0vanity_V0core_V20"))
 (##vcore.multidefine
  (##vcore.load-library
   "_V0vanity_V0assert_V20"))
(define radix (make-parameter 10))
(define color (make-parameter 'red))
((lambda (##vcore.keyval)
  ((lambda (##vcore.keyval)
     (assert-equal (radix) 60)
     (assert-equal (color) 'green)
     (color
      '##vcore.pop-value
      ##vcore.keyval))
   (color
    '##vcore.push-value
    'green))
  (radix
   '##vcore.pop-value
   ##vcore.keyval))
 (radix
  '##vcore.push-value
  60))
(assert-equal (radix) 10)
(assert-equal (color) 'red)
