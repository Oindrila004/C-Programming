//Using Extra Parameter
// #include<stdio.h>
// void print(int x, int n){
//     if(x>n) return;
//     printf("%d\n",x);
//     print(x+1,n);
// }
// int main()
// {
//     int n;
//     printf("Enter n: ");
//     scanf("%d",&n);
//     print(1,n);
//     return 0;
// }

//Without using extra parameter
#include<stdio.h>
void print(int n){
    if(n==0) return;
    print(n-1);
    printf("%d\n",n);
}
int main(){
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    print(n);
    return 0;
}