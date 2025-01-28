#include <stdio.h>

int main(){
int m,n,o;
scanf("%d",&m);
scanf("%d",&n);
scanf("%d",&o);
if (m==n && n==o)
printf("Equilateral");
else if (m==n && n!=o && m!=o)
printf("Isosceles");
else
printf("Scalene");
return 0;}