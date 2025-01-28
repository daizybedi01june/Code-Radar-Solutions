#include <stdio.h>

int main(){
int m,n;
scanf("%d",&m);
scanf("%d",&n);
if ((n-m)>0)
printf("Profit");
else if ((n-m)<0)
printf("Loss");
else
printf("No Profit No Loss");
return 0;}