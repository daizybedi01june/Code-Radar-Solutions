#include <stdio.h>

void firstPeakElement(int n,int arr[]){
    for (int i=0;i<n-2;i++){
        if (arr[i+1]>arr[i] && arr[i+2]>arr[i+1]){
            printf("%d\n",arr[i+1]);
    }}
    else {
        printf("-1\n");
}}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    firstPeakElement(n,arr);
}