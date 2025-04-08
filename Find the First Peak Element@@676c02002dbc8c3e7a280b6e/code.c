#include <stdio.h>

void firstPeakElement(int n,int arr[]){
    for (int i=0;i<n;i++){
        if (((i==0) && arr[i]>arr[i+1]) || ((i==(n-1)) && arr[i]>arr[i-1]) || (i>0 && i<n-1 && arr[i]>arr[i-1] && arr[i]>arr[i+1])){
            printf("%d",arr[i]);
            return;
        }
    }
    printf("-1\n");
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    firstPeakElement(n,arr);
}