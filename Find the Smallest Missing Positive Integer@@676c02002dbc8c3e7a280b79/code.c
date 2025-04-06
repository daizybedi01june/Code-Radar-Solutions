#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int brr[1000000]={0}
    for (int i=0;i<n;i++){
        if (arr[i]>0){
            brr[arr[i]]=1;
        }
    }
    for (int i=1;i<n;i++){
        if (brr[i]==0){
            printf("%d",i);
        }
    }
}