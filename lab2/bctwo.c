#include  <stdio.h>
int main( )
{
    int a ;
a=getchar( );
while (a !=EOF)
{
    putchar (a);
   a=getchar( );
   }   
   printf("a=%d",a); 
}