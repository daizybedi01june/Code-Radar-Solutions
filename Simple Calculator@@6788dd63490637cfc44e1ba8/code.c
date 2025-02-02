#include <stdio.h>

int main(){
    double m,n;
    char s;
    scanf("%lf",&m);
    scanf("%lf",&n);
    scanf("%c",&s);
    switch(s){
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