#include <stdio.h>
int main(){
int m,n,o;
scanf("%d",&m);
scanf("%d",&n);
scanf("%d",&o);
if (m>n && m>o)
printf("%d",m);
if (n>m && n>o)
printf("%d",n);
if (o>m && o>n)
printf("%d",o);
return 0;}
