#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int t;
    int found=0;
    scanf("%d",&t);
    for (int i=0;i<n-1 && !found;i++){
        for (int j=i+1;j<n && !found;j++){
            if (arr[i]+arr[j]==t){
            printf("%d %d\n",arr[i],arr[j]);
            found=1;
        }
    }
    }
    if (!found) {
        printf(" ");
    }}
