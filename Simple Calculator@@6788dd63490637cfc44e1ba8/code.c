#include <stdio.h>

int main(){
    double m,n;
    char c;
    scanf("%lf %lf",&m,&n);
    scanf("%c",&c);
    
    switch(c){
        case '+': printf("%.2lf",n+m);
        break;
        case '-': printf("%.2lf",m-n);
        break;
        case '*': printf("%.2lf",m*n);
        break;
        case '/': printf("%.2lf",m/n);
        break;
        default: printf("error");
    }

}