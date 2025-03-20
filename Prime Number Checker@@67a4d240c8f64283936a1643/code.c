#include <stdio.h>
int prime(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if (n%i==0){
            count++;
        }
    }
    if (count>0){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int n,count=0,prime1;
    scanf("%d",&n);
    prime1=prime(n);
    printf("%d",prime1);
}