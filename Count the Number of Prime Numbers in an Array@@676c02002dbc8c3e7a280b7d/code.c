#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n];
    for (int i=0;i<n;i++){
    scanf("%d",&arr[n]);
    temp[i]=1;}
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
        temp[i]=count;
    }
    int max,min;
    for (int i=0;i<n;i++){
        max=min=temp[0];
        if (temp[i]!=0){
            if (max<temp[i]){
                max=temp[i];
                min=arr[i];
            }
        }
    }
    printf("%d",min);

}