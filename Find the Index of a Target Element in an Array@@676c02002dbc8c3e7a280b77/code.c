#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    for (int i=0;i<n;i++){
        if (k=arr[i]){
            print("%d",i);
            return 0;
        }
    }
    printf("-1\n");
}