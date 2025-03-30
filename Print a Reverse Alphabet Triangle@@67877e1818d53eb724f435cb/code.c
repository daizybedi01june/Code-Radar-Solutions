#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        int a=65;
        for (int j=0;j<=n;j++){
            printf("%c",a);
            a=a+1;
        }
        printf("\n");
    }
}