#include <stdio.h>

void printPrimesInRange(int a,int b){
    int count,prime[100];
    for (int i=a+1;i<b;i++){
        for (int j=2;j<b;j++){
            if (i%j==0){
                printf("%d",i);
                count++;}
            }
        }
    }
   