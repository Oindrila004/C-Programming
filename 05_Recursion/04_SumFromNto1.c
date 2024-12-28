#include<stdio.h>
void print(int n, int sum){
    if(n==0){
        printf("%d",sum);
        return;
    }
    print(n-1,sum+n);
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    print(n,0);
    return 0;
}