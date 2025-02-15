// Your code here...
#include <math.h>
int main(){
    int n;
    scanf("%d",&n);
    if (n & (n-1)==0){
        printf("%d",log2(n)+1);
    }
    else{
        printf("-1");
    }
}