//Program to execute required number of thread
#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

int main()
{

    int num = 10;               //Specify the number of thread
    omp_set_num_threads(num);   //Pass it to this function
    #pragma omp parallel for ordered
    //It will execute thread for 10 times with 10 different threads
    for(int i=0;i<10;i++)
    {
        #pragma omp ordered     //To execute thread in order
        printf("Hello world! %d\n",omp_get_thread_num());
    }
    return 0;
}
