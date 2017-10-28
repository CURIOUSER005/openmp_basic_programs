    //To see the First private and private
    #include<stdio.h>
    #include<stdlib.h>
    #include<omp.h>
     void main()
     {
         int i,a=10,b=5;
         #pragma omp parallel for firstprivate(a) private(b) num_threads(1)
         for(i=1;i<5;i++)
         {
             b++;  //In Linux it will assign value b=0 and then increament operator will work. This is functionality of private()
             a = a+b;
             printf("A is after %d iteration : %d\n",i,a);
         }
         printf("A outside omp region is %d\n",a);
         
     }
