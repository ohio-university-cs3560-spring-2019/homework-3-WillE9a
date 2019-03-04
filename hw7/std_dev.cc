// Will Eshbaugh
// Implementation File for Homework #7
// Practice with a variadic function to calculate standard deviaton (using population std. deviation)
#include<iostream>
#include<cstdarg>
#include<cmath>

double stddev(int n, ...){
    va_list args;
    va_start(args, n);

// calculate the mean:
    double mean = 0;
    double num = 0;
    double sum = 0;
    double sigma = 0;
    for(int i = 0; i < n; i++){
        num = va_arg(args, double);
        mean += num;
    }
    va_end(args);
    mean = mean/n;

// calculate the summation:
    va_start(args, n);
    for(int i = 0; i < n; i++){
        num = va_arg(args, double);
        sum += pow((num - mean), 2);
    }
    va_end(args);
    sigma = sqrt(sum/n);
    return sigma;
}