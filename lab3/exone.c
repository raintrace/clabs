#include <stdio.h>
#define MAXLINE 200
int getline(char line[ ],int max);
int strindex(char source[ ],char searchfor[ ]);
char pattern[ ]="ould";

int getline(char s[ ],int lim)
{int c,i;
i=0;
while(--lim>0&&(c=getchar( ))!=EOF&&c!='\n')
s[i++]=c;
if (c=='\n')
s[i++]=c;
s[i]='\0';
return ;
}
int strindex(char s[ ],char t[ ])
{
int i,j,k;
for (int i=0;s[i]!='\0';i++)
{ k=0;
    for (j=i,k=0;t[k]=='\0'&&s[j]==t[k];i++,k++);
if(t[k]=='\0')
    return  i;
}
return -1;
}

int main( )
{char line[MAXLINE];
int found=0;
while(getline(line,MAXLINE)>0)
if (strindex(line,pattern)>=0){
    printf("%s",line);
    found++;
}
return found;
}

