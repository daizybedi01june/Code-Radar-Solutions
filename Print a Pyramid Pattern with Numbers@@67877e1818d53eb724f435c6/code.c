#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a=1;
        for (int j=1;j<=n-i;j++){
            printf(" ");
        }
        for (int k=1;k<=2*n-2;k++){
            printf("%d",a);
            a=a+1;
        }
        printf("\n");
    }
}