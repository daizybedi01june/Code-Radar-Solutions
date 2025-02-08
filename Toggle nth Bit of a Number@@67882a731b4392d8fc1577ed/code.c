#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a= 1 << m;
    int b= n & a;
    printf("%d",b);
    return 0;
}