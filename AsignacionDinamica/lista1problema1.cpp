/*
a) Declare two (type double) pointer variables named d_var and d_array:
b) Write C++ statements to dynamically create a double-precision floating-point variable and store its address
in d_var.  Also dynamically create an array of 10 double-precision floating-point values and store its 
address in d_array:
c) Write C++ statements to input a value for d_var (i.e., a value that d_var points to) from the console and 
then display it:
d) Write C++ statements to initialize the 10 double values in the dynamically allocated array to 1.0 : 
e) Now write C++ statements to de-allocate the memory (i.e. using the delete operator) pointed by d_var 
and d_array
*/

#include <iostream>
using namespace std;

int main(){

    double *d_var, *d_array;

    double *d_var = new double;
    double *d_array = new double[10];


    return 0; 
}