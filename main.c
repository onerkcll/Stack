#include <stdio.h>
#include <stdlib.h>
#include <memory.h>
int stack[512];
int sp;

void init_stack(void)
{
    memset(stack, 0, sizeof(stack));
    sp  = 0;
}

void stack_push(int val)
{
stack[sp] = val;
sp++;
}

int stack_pop()
{   
    sp--;
    return stack[sp];
}
int main(int argc, char** argv)
{

    init_stack();
    stack_push(50);
    stack_push(20);
    stack_push(45);

    printf("%i\n", stack_pop());
    printf("%i\n", stack_pop());
    printf("%i\n", stack_pop());
    return 0;
}