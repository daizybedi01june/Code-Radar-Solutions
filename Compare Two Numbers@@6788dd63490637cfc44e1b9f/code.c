#include <stdio.h>

int main(){
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    if (n==m)
    printf("Equal");
    else if (n>m)
    printf("First");
    else (m>n)
    printf("Second");
    return 0;
}