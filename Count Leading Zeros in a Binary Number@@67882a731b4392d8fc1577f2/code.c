#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int count=0;
    while((n & (1<<31))==0){
        count+=1;
        n= n<<1;
    }
    printf("%d",&count);
}