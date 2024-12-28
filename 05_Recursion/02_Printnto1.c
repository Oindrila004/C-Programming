#include<stdio.h>
void print(int n){
    if(n==0) return;
    printf("%d\n",n);
    print(n-1);
}
int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    print(n);
    return 0;
}