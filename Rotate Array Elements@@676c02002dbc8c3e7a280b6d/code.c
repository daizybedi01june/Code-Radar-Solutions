#include <stdio.h>

int arrrotate(int arr[],int n,int k){
    int temp[n];
    k= k%n;
    for (int i=0;i<k;i++){
        temp[i]=arr[n-k+i];
    }
    for (int i=k;i<n;i++){
        temp[i]=arr[i-k];
    }
    for (int i=0;i<n;i++){
        arr[i]=temp[i];
    }
}

int printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    arrrotate(arr,n,k);
    printArray(arr,n);
}