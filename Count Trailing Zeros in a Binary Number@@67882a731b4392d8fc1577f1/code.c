#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    while(n & 1==0){
        n=n>>1;
        count+=1;
    }
    printf("%d",count);
}