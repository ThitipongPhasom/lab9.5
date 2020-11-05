#include <stdio.h>
void swap ( int *x, int *y )
{
int tmp;
 tmp   = *x;
 *x = *y;
 *y = tmp;
}
int main()
{
  int a,b;
  printf("Enter first number  : ");
  scanf("%d",&a);
  printf("Enter second number : ");
  scanf("%d",&b);
  swap ( &a ,  &b );
  printf("first = %d and second = %d\n",a,b);
  return 0;
}