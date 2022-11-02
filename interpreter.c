#include "interpreter.h"

int main()
{
    FILE* code = fopen("C:\\Users\\gupta_919456\\CLionProjects\\my-brainf-compiler\\code.bf", "r");
    interpret(code, stdin, stdout);
    fclose(code);
}

void interpret(FILE* code, FILE* in, FILE* out)
{
    int arr[4] = {};
    int *cell = arr;

    char inp;
    while (1) {
        inp = (char) getc(code);

        (inp == '<' && cell--);
        (inp == '>' && cell++);
        (inp == '+' && ++*cell);
        (inp == '-' && --*cell);
        (inp == '.' && fputc(*cell, out));
        (inp == ',' && getc(in));

        if (inp == '[' && !*cell) {
            int stack = 0;
            while ((stack -= (*cell == ']')), *cell++ != '[' || !stack) {
                stack += (*--cell == '[');
            }
        }

        if (inp == ']' && *cell) {
            int stack = 0;
            while (*(--cell-1) != '[' || (stack -= (*cell == ']')), !stack) {
                stack += (*cell == '[');
            }
        }
    }
}
