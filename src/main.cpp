#include <stdio.h>

extern "C"
{
// Add the header files required to run your main
#include "../include/sum.h"
#include "../include/sumn.h"
#include "../include/fib.h"
}

// File for sandboxing and trying out code
int main(int argc, char **argv)
{

    printf("%d", sum(5));

    return 0;
}