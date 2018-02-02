/**
 * my_struct:
 * @field_int: this is displayed fine
 * @field_union: this is not displayed at all 
 *
 * structure that wants to be documented
 */
typedef struct _my_struct my_struct;

struct _my_struct {
  int field_int;
  union {
    int a;
    float b;
  } field_union;
};


/**
 * some_func:
 * @a: just a
 * @b: just b
 *
 * just func
 */
int some_func(int a, struct _my_struct * b);
