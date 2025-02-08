#include <stdio.h>

int main(){
    int m,n,a;
    scanf("%d %d",&m,&n);
    a= m >> n;
    if (1&a)
    printf("1");
    else
    printf("0");
}