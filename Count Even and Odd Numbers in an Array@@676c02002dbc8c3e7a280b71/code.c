#include <stdio.h>

int main(){
    int n, count1=0,count2=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            count1++;
        }
        else{
            count2++;
        }
    }
    printf("%d %d",count1,count2);
}