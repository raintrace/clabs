#include <stdio.h>
#define MAXLINE 200
int strindex(char s[ ],char t[ ])
{
int k=0;
int j=0;
for (int i=0;s[i]!='\0';i++)
{ k=0;
    for (j=i,k=0;t[k]=='\0'&&s[j]==t[k];i++,k++);
if(t[k]=='\0')
    return  i;
}
return -1;
}
