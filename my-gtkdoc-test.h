/**
 * my_struct:
 * @field_int: this wants to be displayed
 * @field_int2: this wants to be displayed
 *
 * structure that wants to be documented
 */
typedef struct _my_struct
{
  int field_int;
  int field_int2;
} my_struct;


/**
 * some_func:
 * @a: just a
 * @b: just b
 *
 * just func
 */
int some_func(int a, struct _my_struct * b);
