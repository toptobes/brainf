#include "interpreter.h"

int main()
{
    char *brainfuck = ">+[+[<]>>+<+]>.";

//    interpret(brainfuck, stdin, stdout);
    i(brainfuck);
    puts("");
}

char a[9999]={},*p=a,s,d;int i(char*c){for(;(d=*c)&&*c!=93;++c){p-=d==60;p+=d==62;*p-=d==45;*p+=d==43;d==
46?putchar(*p):d==44?*p=getchar():d==91&&*p&&i(1+c--);if(*c==91&&!*p)for(s=0;s-=*++c==93,*c!=93||s
!=0;)s+=c[-1]==91;}}

void interpret(char* code, FILE* in, FILE* out)
{
    static char arr[39393992] = {};
    static char *cell = arr;

    do {
        (*code == '<' && cell--);
        (*code == '>' && cell++);
        (*code == '+' && ++*cell);
        (*code == '-' && --*cell);
        (*code == '.' && fputc(*cell, out));
        (*code == '!' && printf("%d", *cell));
        (*code == ',' && (*cell = getc(in)));

        if (*code == ']') {
            return;
        }

        if (*code == '[' && *cell != 0) {
            interpret(1+code--, in, out);
        }

        if (*code == '[' && *cell == 0) {
            int stack = -1;
            do {
                stack += (*code == '[');
                stack -= (*code == ']');
            } while (*++code != ']' || stack != 0);
        }
    } while (*++code);
}

//int i(char*c){
//    static char a[9<<9]={},*p=a,s,d;
//    for(;(d=*c)&&*c!=']';++c){
//        p-=d=='<';
//        p+=d=='>';
//        *p-=d=='-';
//        *p+=d=='+';
//        d=='.'?putchar(*p):d==','?*p=getchar():d=='['&&*p&&i(1+c--);
//        if(*c=='['&&!*p)for(s=-1;s-=*c==']',*++c!=']'||s!=0;)s+=c[-1]=='[';
//    }
//}
