#include <stdio.h>

void printPrimesInRange(int a,int b){
    int count,prime[100];
    for (int i=a+1;i<b;i++){
        for (int j=2;j<b;j++){
            if (i%j==0){
                for (int a=0;a<b;a++){
                scanf("%d",&prime[a]);
                count++;}
            }
        }
    }
    if (count>1){
        for (int a=0;a<b;a++){
                scanf("%d",prime[a]);
    }}
    else {
        printf("No prime numbers");
    }
}