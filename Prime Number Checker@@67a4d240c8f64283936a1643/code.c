#include <stdio.h>
int isPrime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if (n%i==0){
            count++;
        }
    }
    if (count>0){
        return 0;
    }
    else{
        return 1;
    }
}
