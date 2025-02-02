#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    char m=toupper("%x",n);
    printf("Hexadecimal: %c",m);
    printf("Octal: %o",n);
    return 0;

}