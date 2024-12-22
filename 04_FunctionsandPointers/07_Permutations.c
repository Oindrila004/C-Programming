#include<stdio.h>
#include<math.h>
int fact(int n){
    int f = 1;
    for(int i=1; i<=n; i++){
        f *= i;
    }
    return f;
}
int npr(int n, int r){
    return fact(n)/(fact(n-r));
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int r;
    printf("Enter r: ");
    scanf("%d",&r);
    int ans = npr(n,r);
    printf("%d",ans);
    return 0;
}