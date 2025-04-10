#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int elements[n];
    for (int i=0;i<n;i++){
        if (arr[i]%2==0){
            elements[count++]=arr[i];
        }
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<n-i-1;j++){
            if (elements[j]>elements[j+1]){
                int temp=elements[j];
                elements[j]=elements[j+1];
                elements[j+1]=temp;
            }
        }
    }
    printf("%d",elements[count-1]);
}