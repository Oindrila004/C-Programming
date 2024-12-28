#include<stdio.h>
int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1);
    int sumN = sum(n-1)+n;
    return sumN;
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int s = sum(n);
    printf("The sum of first n natural numbers is: %d\n",s);
    return 0;
}