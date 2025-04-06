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
        if (temp[i]==0)
        continue;
        int count=0;
        for (int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                count++;
                temp[j]=0;
            }
        }
        temp[i]=count;
    }
    for (int i=0;i<n;i++){
        if (temp[i]!=0){
            printf("%d %d\n",arr[i],temp[i]);
        }
    }
}