#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{
    #pragma omp parallel
    {
        printf("Hello world!\n"); //It runs four threads at a time

    }

    return 0;
}
