#include<stdio.h>
int main(){
    int i, n = 0;
    for(i=100; i>=((2*n)-1); i=i-3){
        printf("%d ",i);
    }
    return 0;
}