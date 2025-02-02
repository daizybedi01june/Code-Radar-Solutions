#include <stdio.h>

int main(){
    double m,n;
    char c;
    scanf("%lf",&m);
    scanf("%lf",&n);
    scanf("%c",&c);
    switch(c){
        case '+': printf("%.2lf\n",m+n);
        break;
        case '-': printf("%.2lf\n",m-n);
        break;
        case '*': printf("%.2lf\n",m*n);
        break;
        case '/': printf("%.2lf\n",m/n);
        break;
        default: printf("error");
    }

}