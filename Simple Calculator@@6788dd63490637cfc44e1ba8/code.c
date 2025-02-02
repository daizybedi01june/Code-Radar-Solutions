#include <stdio.h>

int main(){
    float m,n;
    char c;
    scanf("%f\n",&m);
    scanf("%f\n",&n);
    scanf("%c\n",&c);
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