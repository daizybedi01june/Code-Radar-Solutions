#include <stdio.h>

void selectionSort(){
    for (int i=0;i<n-1;i++){
        char min_pos=i;
        for (int j=i+1;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                min_pos=j
            }
        }
        if (min_pos!=i){
            char temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

void printArray(){
    for (int i=0;i<n;i++){
        printf("%c",arr[i]);
    }
}