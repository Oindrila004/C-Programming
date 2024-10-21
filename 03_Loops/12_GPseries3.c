#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    float a=100;
    for(i=1; i<=n; i++){
        printf("%f ",a);
        a= a/2;
    }
    return 0;
}