#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    int var1 = 1 , var2 = 1, sum = 1;
    for(int i=1;i<=n-2;i++){
        sum = var1 + var2;
        var1 = var2;
        var2 = sum;
    }
    printf("The %dth fibonacci term is %d",n,sum);
    return 0;
}