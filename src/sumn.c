#include "../include/sumn.h"

#include <stdio.h>
#include <assert.h>

int sumn(int n)
{

    if (n == 1) // Base case
        return 1;

    else
        return (2 * n - 1) + sumn(n - 1);
}