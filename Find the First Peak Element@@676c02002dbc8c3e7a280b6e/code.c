#include <stdio.h>

int firstPeakElement(int n,int arr[]){
    int count;
    for (int i=0;i<n;i++){
        if (arr[i+1]>arr[i] && arr[i+2]>arr[i+1]){
            return arr[i+1];
            count++;
        }
        if (count>0){
            break;
        }
        else{
            return -1;
        }
    }  
}

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&n);
    }
    firstPeakElement(n,arr[]);
}