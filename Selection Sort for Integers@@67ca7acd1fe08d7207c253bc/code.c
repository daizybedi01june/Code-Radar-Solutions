#include<stdio.h>

void selectionSort(int arr[],int n){
       for (int i=0;i<n-1;i++){
        int min_pos=i;
        for (int j=i+1;j<n;j++){
            if (arr[j]<arr[min_pos]){
                min_pos=j;
            }
        }
        if (min_pos != i){
            int temp=arr[i];
            arr[i]=arr[min_pos];
            arr[min_pos]=temp;
        }
}}

void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}