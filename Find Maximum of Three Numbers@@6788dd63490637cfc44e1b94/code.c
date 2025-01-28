#include<stdio.h>
int main(){
int m,n,o;
scanf("%d",&m);
scanf("%d",&n);
scanf("%d",&o);
if (m>n && m>o)
printf("%d",m);
else if(n>o && n>m)
printf("%d",n);
else
printf("%d",o);
return 0;
}
