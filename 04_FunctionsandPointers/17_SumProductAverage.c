#include<stdio.h>
void calculate(int a, int b, int *sum, int *product, int *average){
    *sum = a + b;
    *product = a * b;
    *average = (a + b)/2; 
}
int main(){
    int value1, value2, sum, product, average;
    printf("Enter the first value: ");
    scanf("%d",&value1);
    printf("Enter the second value: ");
    scanf("%d",&value2);
    calculate(value1, value2, &sum, &product, &average);
    printf("sum = %d\nproduct = %d\naverage = %d\n",sum, product, average);
    return 0;
}