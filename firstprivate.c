    //To see the First private
    #include<stdio.h>
    #include<stdlib.h>
    #include<omp.h>
     int main()
     {
         int i,a=10,b=5;
         #pragma omp parallel for firstprivate(a) num_threads(1)
         for(i=1;i<5;i++)
         {
             a = a+b;
             printf("A is after %d iteration : %d\n",i,a);
         }
         printf("A outside firstprivate is %d\n",a);
         return 0;
     }
