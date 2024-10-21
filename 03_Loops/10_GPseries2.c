#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int a = 3;
    for(i=3; i<=n; i++){
        printf("%d ",a);
        a = a*4;
    }
    return 0;
}