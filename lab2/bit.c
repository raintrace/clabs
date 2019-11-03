#include  <stdio.h>
 int main( )
{
unsigned  int a=1;
unsigned int b=0;
unsigned int c=0-1;
while(a>b)
{
b=b+1;
  a=a<<1;
}
 printf("%d\n",b);
printf("%u\n",c);
  return 0;
}