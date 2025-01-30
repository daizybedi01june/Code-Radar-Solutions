#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n==2 || n==3 || n==5 || n==7 || n==11 || n==13 || n==17 || n==23){
        printf("Prime");
    }
    else
    {printf("Not Prime");}
}
