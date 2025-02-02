#include <stdio.h>

int main(){
    float m,n;
    char c;
    scanf("%f",&m);
    scanf("%f",&n);
    scanf("%c",&c);
    switch(c){
        case "+": printf("%.2f",n+m);
        break;
        case "-": printf("%.2f",m-n);
        break;
        case "*": printf("%.2f",m*n);
        break;
        case "/": printf("%.2f",m/n);
        break;
    }

}