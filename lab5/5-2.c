#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

int mian( );
int getch(void);
void ungetch(int);

int getfloat(float *pn)
{
int c, sign;
    float   power;

    while (isspace(c = getch()))
        ;
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetch(c);
        return 0;
    }
  sign= (c == '-') ? -1 : 1;
    if (c == '+' || c == '-')
    c=getch( );
    for(*pn=0;isdigit(c);c=getch( ))
    *pn=10**pn+(c-'0');
    *pn*=sign;
    if (c!=EOF)
    ungetch(c);
    return c;
}