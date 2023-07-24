%{
enum keyword_t {
  // TODO
};


%}

%token T_OPEN_PAREN
// TODO ...

%token <int_val> T_INTEGER

%union {
  unsigned long int_val;
  int keyword_val;
}

%%
start : toplevel
      ;

toplevel : declaration
         ;

declaration : specified_type prefix_declarator T_SEMICOLON
            ;

specified_type : T_TYPE
               | specifier_list
               | specifier_list T_TYPE
               | T_TYPE specifier_list
               | specifier_list T_TYPE specifier_list
               ;

qualified_type : T_TYPE
               | int_qualifier_list T_TYPE
               | T_TYPE int_qualifier_list
               | int_qualifier_list T_TYPE int_qualifier_list
               ;


specifier_list : T_SPECIFIER
               | T_QUALIFIER
               | T_INT_QUALIFER
               | T_STORAGE specifier_list
               | T_QUALIFIER specifier_list
               | T_INT_QUALIFER specifier_list
               ;

qualifier_list : T_QUALIFIER
               | T_QUALIFIER qualifier_list
               ;

int_qualifier_list : T_QUALIFIER
                   | T_INT_QUALIFIER
                   | T_QUALIFIER int_qualifier_list
                   | T_INT_QUALIFIER int_qualifier_list
                   ;

prefix_declarator : postfix_declarator
                  | T_STAR prefix_declarator
                  | T_STAR qualifier_list prefix_declarator
                  ;

postfix_declarator : T_IDENTIFIER
                   | T_OPEN_PAREN prefix_declarator T_CLOSE_PAREN
                   | postfix_declarator T_OPEN_PAREN parameter_list T_CLOSE_PAREN
                   | postfix_declarator T_OPEN_BRACKET T_INTEGER T_CLOSE_BRACKET
                   | postfix_declarator T_OPEN_BRACKET T_CLOSE_BRACKET
                   | postfix_declarator T_OPEN_PAREN T_CLOSE_PAREN
                   ;

parameter_list : qualified_type
               | qualified_type prefix_declarator
               | qualified_type abstract_prefix_declarator
               | qualified_type T_COMMA parameter_list
               | qualified_type prefix_declarator T_COMMA parameter_list
               | qualified_type abstract_prefix_declarator T_COMMA parameter_list
               ;

abstract_prefix_declarator : abstract_postfix_declarator
                           | T_STAR abstract_prefix_declarator
                           | T_STAR qualifier_list abstract_prefix_declarator
                           ;

abstract_postfix_declarator : T_OPEN_PAREN abstract_prefix_declarator T_CLOSE_PAREN
                            | T_OPEN_PAREN parameter_list T_CLOSE_PAREN
                            | T_OPEN_BRACKET T_INTEGER T_CLOSE_BRACKET
                            | T_OPEN_BRACKET T_CLOSE_BRACKET
                            | T_OPEN_PAREN T_CLOSE_PAREN
                            | abstract_postfix_declarator T_OPEN_PAREN parameter_list T_CLOSE_PAREN
                            | abstract_postfix_declarator T_OPEN_BRACKET integer_expression T_CLOSE_BRACKET
                            | abstract_postfix_declarator T_OPEN_BRACKET T_CLOSE_BRACKET
                            | abstract_postfix_declarator T_OPEN_PAREN T_CLOSE_PAREN
                            ;

// TODO actually implement this
integer_expression : T_INTEGER
                   ;

%%
