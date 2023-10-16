#include "interpreter.h"

int main()
{
    char *brainfuck1 = ">+[+[<]thisacomment>>+<+]>.";
    i(brainfuck1); // 'A'
    reset();

    char *brainfuck2 = ">++++++++[<+++++++++>-]<.>++++[<+++++++>-]<+.+++++++..+++.>>++++++[<+++++++>-]<++.------------.>++++++[<+++++++++>-]<+.<.+++.------.--------.>>>++++[<++++++++>-]<+.";
    i(brainfuck2); // 'Hello, World!'
    reset();
}
