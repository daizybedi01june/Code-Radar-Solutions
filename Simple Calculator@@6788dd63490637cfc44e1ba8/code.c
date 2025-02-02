#include <stdio.h>

int main(){
    float m,n;
    char c[100];
    scanf("%f",&m);
    scanf("%f",&n);
    scanf("%c",&c);
    if (c=='+')
    printf("%f",m+n);
    else if (c=='-')
    printf("%f",m-n);
    else if (c=='*')
    printf("%f",m*n);
    else if (c=='/')
    printf("%f",m/n);
    else
    printf("error");
}