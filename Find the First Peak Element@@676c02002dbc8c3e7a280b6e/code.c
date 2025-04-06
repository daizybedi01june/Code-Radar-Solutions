#include <stdio.h>

void firstPeakElement(int n,int arr[]){
    int count;
    for (int i=0;i<n;i++){
        if (arr[i+1]>arr[i] && arr[i+2]>arr[i+1]){
            printf(arr[i+1]);
            count++;
        }
        if (count>0){
            break;
        }
        else{
            printf(-1);
        }
    }  
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[n]);
    }
    firstPeakElement(n,arr);
}