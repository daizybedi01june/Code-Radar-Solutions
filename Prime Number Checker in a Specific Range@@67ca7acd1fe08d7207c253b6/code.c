#include <stdio.h>

void printPrimesInRange(int a,int b){
    int flag,found=0;
    for (int i=a+1;i<b;i++){
        flag=1;
        for (int j=2;j*j<=i;j++){
            if (i%j==0){
                flag=0;
                break;
            }
        }
        if (flag == 1 && i > 1) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (!found) {
        printf("No prime numbers");
    }
}
   