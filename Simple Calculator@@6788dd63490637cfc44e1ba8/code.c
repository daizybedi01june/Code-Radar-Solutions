#include <stdio.h>

int main(){
    int m,n;
    char c;
    scanf("%d\n",&m);
    scanf("%d\n",&n);
    scanf("%c\n",&c);
    if (c=='+')
    printf("%d",m+n);
    else if (c=='-')
    printf("%d",m-n);
    else if (c=='*')
    printf("%d",m*n);
    else if (c=='/')
    printf("%d",m/n);
    else
    printf("error");
}