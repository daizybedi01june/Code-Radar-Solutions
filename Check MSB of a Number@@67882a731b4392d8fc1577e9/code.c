#include <stdio.h>

int main(){
    int n,m,a;
    scanf("%d",&n);
    a=sizeof(n)*8;
    m= 1 << (a-1);
    if (m&1){
        printf("Set");
    }
    else{
        printf("Not Set");
    }
    return 0;
}