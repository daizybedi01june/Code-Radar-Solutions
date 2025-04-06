#include <stdio.h>

int fibonacciSeries(int n){
    if (n==0){
        return 0;
    }
    if (n==1){
        return 1;
    }
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);

    int i;
    for(i = 0; i < 10; i++) {
        printf("%d ", fibonacciSeries(i));
    }
}