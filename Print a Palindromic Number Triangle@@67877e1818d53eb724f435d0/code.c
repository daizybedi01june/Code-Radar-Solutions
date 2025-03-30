#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++){
        int a=i-1;
        for (int b=1;b<=n-i;b++){
            printf(" ");
        }
        for (int j=1;j<=i;j++){
            printf("%d",i);
        }
        for (int k=1;k<=i-1;k++){
            printf("%d",a);
            a--;
        }
    }
}