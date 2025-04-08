#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr1[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++){
        arr1[i]=arr[i];
    }

    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    for (int i=0;i<n;i++){
    if (arr[i]==arr1[i]){
        printf("Sorted");
        return 0;
    }}
    printf("Not Sorted");
    }

