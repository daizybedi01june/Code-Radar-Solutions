#include <stdio.h>

int fibonacciSeries(int n){
    if (n==0) printf (0);
    if (n==1) printf (1);
    printf (fibonacciSeries(n-1)+fibonacciSeries(n-2));
}