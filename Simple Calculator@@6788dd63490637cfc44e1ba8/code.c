#include <stdio.h>

int main(){
    int m,n;
    char c;
    scanf("%d",&m);
    scanf("%d",&n);
    scanf("%c",&c);
    switch(c){
        case '+': printf("%d",n+m);
        break;
        case '-': printf("%d",m-n);
        break;
        case '*': printf("%d",m*n);
        break;
        case '/': printf("%d",m/n);
        break;
    }

}