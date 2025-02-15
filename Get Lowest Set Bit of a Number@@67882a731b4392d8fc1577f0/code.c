// Your code here...
int main(){
    int n;
    scanf("%d",&n);
    int lsb = n & (~n+1);
    printf("%d",lsb);
    return 0;
}