#include "interpreter.h"

char a[9999]={},*p=a,s,d;i(char*c){for(;(d=*c)&&d^93;c++){p-=d==60;p+=d==62;*p-=d==45;*p+=d==43;d==46?putchar
(*p):d==44?read(0,p,1):d==91&&*p&&i(1+c--);if(d==91&!*p)for(;(s+=*c==91,
s-=*++c==93)|*c^93;);}}

/*
Commented version to view without inline hints in CLion

char a[9999]={},*p=a,s,d;i(char*c){for(;(d=*c)&&d^93;c++){p-=d==60;p+=d==62;*p-=d==45;*p+=d==43;d==46?putchar
(*p):d==44?read(0,p,1):d==91&&*p&&i(1+c--);if(d==91&!*p)for(;s+=*c==91,(s-=*++c==93)|*c^93;);}}
*/

void reset()
{
    int i;
    for (i = 0; i < sizeof(a); i++)
        a[i] = 0;
    p = a;
    puts("");
}
