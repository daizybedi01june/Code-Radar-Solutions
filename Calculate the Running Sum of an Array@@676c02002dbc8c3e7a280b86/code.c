#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<n;i++){
        scanf("%d",&n);
    }
    int count=0;
    int counts=0;
    int elements[n];
    for (int i=0;i<n;i++){
        for (int j=0;j<=i;i++){
            count+=arr[j]
            elements[counts++]=count;
        }
    }
    for (int i=0;i<n;i++){
        printf("%d",&arr[i]);
    }
}