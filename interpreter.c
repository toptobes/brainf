#include "interpreter.h"

char a[9999]={},*p=a,s,d;int i(char*c){for(;(d=*c)&&*c!=93;++c){p-=d==60;p+=d==62;*p-=d==45;*p+=d==43;d==
46?putchar(*p):d==44?gets(p):d==91&&*p&&i(1+c--);if(*c==91&!*p)for(s=0;s-=*++c==93,*c!=93|s
!=0;)s+=c[-1]==91;}}

void reset()
{
    p=a;
    for (int i = 0; i < 9999; i++)
        a[i] = 0;
    puts("");
}