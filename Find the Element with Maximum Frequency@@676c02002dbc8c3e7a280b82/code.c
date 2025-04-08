#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        temp[i]=1;
    }
    for (int i=0;i<n;i++){
        if (temp[i]==0){
            continue;
        }
        int count=0;
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
                temp[j]=0;
            }
        }
        temp[i]=1;
    }
    int max,element;
    max=temp[0];
    for (int i=0;i<n;i++){
    if (temp[i]!=0 && max<temp[i]){
        max=temp[i];
        element=arr[i];
    }}
    printf("%d",element);    
}