#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int counts=0;
    int elements[n];
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;j++){
            count+=arr[j];
            elements[counts++]=count;
        }
    }
    for (int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}