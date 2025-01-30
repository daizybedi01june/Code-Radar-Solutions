#include <stdio.h>

int main(){
    int m,n;
    scanf("%d %d",&m,&n);
    if (m>=18 && n==1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
}