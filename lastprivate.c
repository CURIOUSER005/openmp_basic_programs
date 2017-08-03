//To see the Last private
#include<stdio.h>
#include<stdlib.h>
#include<omp.h>
 int main()
 {
     int i,a=10,b=5;
     #pragma omp parallel for lastprivate(a) num_threads(1)
     for(i=1;i<5;i++)
     {
         a = a+b;                    //It takes initial value of a as 0 and not 10
         printf("A is after %d iteration : %d\n",i,a);
     }
     printf("A outside firstprivate is %d\n",a);  //gives output of fr loop
     return 0;
 }
