#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int m= (n+1)/2;
    for (int i=1;i<=m;i++){
        for (int j=1;j<=m-i;j++){
            printf(" ");
        }
        for (int k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
    for (int i=m-1;i<=n;i++){
        for (int j=1;j<=i;j++){
            printf(" ");
        }
        for (int k=1;k=2*i-1;k++){
            printf("*");
        }
        printf("\n");
    }
}