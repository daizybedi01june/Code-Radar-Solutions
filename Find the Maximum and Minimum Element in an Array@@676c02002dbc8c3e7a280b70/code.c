#include <stdio.h>

int main(){
    int min, max;
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for (int i=0;i<n;i++){
        if (arr[i]>max){
            max=arr[i];
        }
        if (arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
    
}