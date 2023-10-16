#include "interpreter.h"

// Do I need `|*c^93` after `(s+=*c==91,s-=*++c==93)`?? Seems to work w/out (187 chars)
//char a[9999],*p=a,s,d;i(char*c){for(;d^93&(d=*++c);){p-=d==60;p+=d==62;*p-=d==45;*p+=d==43;d==46?putchar(*p):d==91&&*p&&i(c--);
//read(0,p,d==44);if(!*p&d==91)for(;s+=*c==91,s-=*++c==93;);}}

// 176 chars but less portable...
char a[9999],*p=a,s,d;i(char*c){for(;d^93&(d=*++c);)p-=d==60,p+=d==62,*p-=d==45,*p+=d==43,d==91?*p?i(c--):
({for(;s+=*c==91,s-=*++c==93;);}):d==46&&putchar(*p),read(0,p,d==44);}

void reset()
{
    memset(a, 0, sizeof(a));
    puts("");
}
