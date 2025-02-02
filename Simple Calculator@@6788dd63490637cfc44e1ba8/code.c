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
    else if (c=='/' && m>0 && n>0)
    printf("%.0f",m/n);
    else if (c=='/' && n==0)
    printf("error");
    else
    printf("error");
    return 0;
}