#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    if (n%2==0 || n%3==0 || n%5==0 || n%11==0 ||n%13==0){
        printf("Not Prime");
    }
    else
    {printf("Prime");}
}
