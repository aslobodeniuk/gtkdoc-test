#include "my-gtkdoc-test.h"

int some_func(int a, struct _my_struct * b)
{
  b->field_int = a;
  return b->field_int;
}
