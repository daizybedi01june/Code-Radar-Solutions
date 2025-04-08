#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
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
    int mindiff=INT_MAX;
    int num1=0;num2=0;
    for (int i=0;i<n-1;i++){
        int diff=abs(arr[i]-arr[i+1]);
        if (mindiff<diff){
            mindiff=diff;
            num1=arr[i];
            num2=arr[i+1];
        }
    }
    printf("%d %d",num1,num2);
}