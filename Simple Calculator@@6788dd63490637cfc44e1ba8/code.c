#include <stdio.h>

int main(){
    int m,n;
    char c;
    scanf("%d %d %c",&m,&n,&c);
    
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