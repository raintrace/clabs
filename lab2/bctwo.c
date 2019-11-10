#include  <stdio.h>
int main( )
{  int count=0;
int b=1;
   char a;
  unsigned  int c=0;

   while((a=getchar( )!='\n')){
   c=c*10+(a-'0');
   }

   while (c!=0){
   b=b*2;
    c=c&(b);
    count++;
}
   
printf("%d\n",count);
return 0;
}