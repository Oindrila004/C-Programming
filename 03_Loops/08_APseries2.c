#include<stdio.h>
int main(){
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=4; i<=((2*n)-1); i=i+3){
        printf("%d\n",i);
    }
    return 0;
}