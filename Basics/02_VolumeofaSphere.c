#include<stdio.h>
int main(){
    int r;
    printf("Enter the radius of the sphere: ");
    scanf("%d",&r);
    float volume = 4 * 3.14 * r * r * r / 3;
    printf("The volume of the sphere is : %f",volume);
    return 0;
}