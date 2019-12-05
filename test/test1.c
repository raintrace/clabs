#include <stdio.h>
int main( )
{ printf("Please enter a length of no more than 50 characters\n");
     int c ;
     int zm=0;
     int sz=0;
     while((c=getchar( ))!='\n'){
         if(c=='a'||c=='A')
         ++zm;
         else if(c=='0')
         ++sz;}
         printf("The number of a is:%d and The number of 0 is:%d\n",zm,sz);
     
         return 0;
         
     }
