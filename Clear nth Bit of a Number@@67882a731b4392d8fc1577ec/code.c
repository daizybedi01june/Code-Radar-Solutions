#include <stdio.h>

int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a= n & ~(n >> m);
    printf("%d",a);
    return 0;
}