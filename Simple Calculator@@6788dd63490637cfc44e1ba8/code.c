#include <stdio.h>

int main(){
    float m,n;
    char c;
    scanf("%f\n",&m);
    scanf("%f\n",&n);
    scanf("%c\n",&c);
    if (c=='+')
    printf("%.0f",m+n);
    else if (c=='-')
    printf("%.0f",m-n);
    else if (c=='*')
    printf("%.0f",m*n);
    else if (c=='/')
    printf("%.0f",m/n);
    else
    printf("Error");
}