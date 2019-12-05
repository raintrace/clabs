#include <stdio.h>
int main( )
{ printf ("please input\n");
int a=0;
int b=0;
char c;
while ((c=getchar( ))!=' '){
   a=a*10+(c-'0');}
while ((c=getchar( ))!='\n'){
   b=b*10+(c-'0');
}
char d;
d=getchar( );
double num=0;
switch (d)
{
case'+':num=a+b; break;
case'-':num=a-b; break;
case'*':num=a*b; break;
case'/':num=a/b; break;
default:break;
}
printf("The expression has a value of:%.1f\n",num);
return 0;
}