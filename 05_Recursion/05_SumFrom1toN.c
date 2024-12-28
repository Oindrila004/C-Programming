#include<stdio.h>
int sum(int n){
    if(n==1) return 1;
    int recAns = n + sum(n-1);
    return recAns; 
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}