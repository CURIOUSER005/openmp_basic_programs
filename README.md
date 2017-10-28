# openmp_basic_programs

This repo include basic parallel program using [openMP](http://www.openmp.org/) API.</br>
It also contain example of basic clause like firstprivate, lastprivate.

# Requirement 

## gcc compiler 
Most of linux distribution has gcc preinstalled.<br/>
You should also need <b>omp.h</b>  header file. 

# How to use 
for linux
```sh
$ gcc -fopenmp <program.c>
```

# Output

Values of B is : 1<br>
A is after 1 iteration : 11<br>
Values of B is : 2<br>
A is after 2 iteration : 13<br>
Values of B is : 3<br>
A is after 3 iteration : 16<br>
Values of B is : 4<br>
A is after 4 iteration : 20<br>
A outside omp region is 10<br>
