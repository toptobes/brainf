#include "interpreter.h"

int main()
{
    char *brainfuck = "++>+++++[<+>-]<!";

    interpret(brainfuck, stdin, stdout);
}

void interpret(char* code, FILE* in, FILE* out)
{
    int arr[4] = {};
    int *cell = arr;

    do {
        (*code == '<' && cell--);
        (*code == '>' && cell++);
        (*code == '+' && ++*cell);
        (*code == '-' && --*cell);
        (*code == '.' && fputc(*cell, out));
        (*code == '!' && printf("%d", *cell));
        (*code == ',' && getc(in));

        if (*code == '[' && !*cell) {
            int stack = 0;
            while ((stack -= (*code == ']')), *code++ != '[' || !stack)
                stack += (*--code == '[');
        }

        if (*code == ']' && *cell) {
            int stack = 0;
            while (*(--code - 1) != '[' || (stack -= (*code == ']')), !stack)
                stack += (*code == '[');
        }
    } while (*++code);
}
