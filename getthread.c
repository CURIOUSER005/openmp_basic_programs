//To get the number of thread
#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
 int main()
 {
     int i;
     #pragma omp parallel for
     for(i=0;i<20;i++)
     {
         printf("Thread No. %d\n",omp_get_thread_num()); //omp_get_thread_num() gives the number of thread running
     }
     return 0;
 }
