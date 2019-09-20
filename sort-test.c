
#include "utst.h"
//comment
void sort( int* x_ptr, int* y_ptr )
{
  if ( (*x_ptr) > (*y_ptr) ) {
    int temp = *x_ptr;
    *x_ptr   = *y_ptr;
    *y_ptr   = temp;
  }
}

int main( void )
{
  int a = 5;
  int b = 9;
  sort( &a, &b );
  UTST_ASSERT_INT_EQ( a, 5 );
  UTST_ASSERT_INT_EQ( b, 9 );
  a = 9;
  b = 5;
  sort(&a, &b);
  UTST_ASSERT_INT_EQ(a, 5);
  UTST_ASSERT_INT_EQ(b, 9);
  return 0;

}
