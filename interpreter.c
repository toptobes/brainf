#include "interpreter.h"

char a[9999]={},*p=a,s,d;int i(char*c){for(;(d=*c)&&d^93;c++){p-=d==60;p+=d==62;*p-=d==45;*p+=d==43;d==46?putchar
(*p):d==44?read(0,p,1):d==91&&*p&&i(1+c--);if(d==91&!*p)for(s=0;s+=*c==91,(s-=*++c==93)|*c^93;);}}

// WIP testing
//int a[9999] = {}; char *p = a; int s; int d;
//
//int i(char *c) {
//    for (; (d = *c) && d ^ 93; c++) {
//        p -= d == 60;
//        p += d == 62;
//        *p -= d == 45;
//        *p += (d == 43);
//        int dd = (d == 43);
//
//        d == 46
//            ? putchar(*p)
//            : d == 44
//                ? read(0,p,1)
//                : d == 91 && *p &&
//                    i(1 + c--);
//
//        if (d == 91 & !*p)
//            for(s=0;s+=*c==91,(s-=*++c==93)|*c^93;);
//    }
//}

void reset()
{
    p=a;
    for (int i = 0; i < 9999; i++)
        a[i] = 0;
    puts("");
}
