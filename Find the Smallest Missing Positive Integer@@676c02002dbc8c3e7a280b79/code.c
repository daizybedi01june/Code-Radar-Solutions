#include <stdio.h>

void main(){
    int n;
    scanf("%d",&n);
    int arr[n],brr[n+2];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]); 
    }

    for (int i=0;i<n+2;i++){
        brr[i]=0;
    }

    for (int i=0;i<n;i++){
        if (arr[i]>0 && arr[i] <= n+1){
            brr[arr[i]]=1;
        }
    }
    for (int i=1;i<n;i++){
        if (brr[i]==0){
            printf("%d",i); 
            return;
        } 
    }
    // printf("%d\n", n);
}