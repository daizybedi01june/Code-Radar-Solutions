#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[n]);
        temp[i]=1;
    }
    for (int i=0;i<n;i++){
        if (temp[i]==0)
        continue;
        for (int j=0;j<n;j++){
            if (temp[j]==0)
            continue;
            if (arr[i]==arr[j]){
                temp[i]++;
                temp[j]=0;
            }
        }
    }
    for (int i=0;i<n;i++){
        if (temp[i]!=0){
            printf("%d %d",arr[i],temp[i]);
        }
    }
}