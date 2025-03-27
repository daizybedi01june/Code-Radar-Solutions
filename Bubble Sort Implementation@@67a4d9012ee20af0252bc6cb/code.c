#include<stdio.h>
int bubbleSort(){
    int n;
    int arr[n];
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-1-i;j++){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
}
int printArray(){
    int n;
    int arr[n];
    for (int i=0;i<n;i++){
    printf("%d",arr[i]);}
}