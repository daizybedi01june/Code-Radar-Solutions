#include <stdio.h>

int main(){
    float m,n;
    char c;
    scanf("%f\n",&m);
    scanf("%f\n",&n);
    scanf("%c\n",&c);
    if (c=='1')
    printf("%.0f",m+n);
    else if (c=='2')
    printf("%.0f",m-n);
    else if (c=='3')
    printf("%.0f",m*n);
    else if (c=='4')
    printf("%.0f",m/n);
    else 
    printf("error");
    
}