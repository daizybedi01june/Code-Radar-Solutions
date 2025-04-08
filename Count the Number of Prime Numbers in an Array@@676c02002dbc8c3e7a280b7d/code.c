#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n],temp[n];
    for (int i=0;i<n;i++){
    scanf("%d",&arr[i]);}
    int count=0;
    for (int i=0;i<n;i++){
        for (int j=1;j<200;j++){
            if (arr[i]%j==0){
                count++;
            }
        }
    }
    printf("%d",count);
    return 0;
}