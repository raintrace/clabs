#include <stdio.h>
#include <string.h>
int main()
{
int c;
char s[100],*p;
scanf("%s",s);
c = strlen(s);
p = &s[c-1];
while(p!=s)
{
printf("%c", *p--);
}
printf("%c\n", *p);
return 0;
} 