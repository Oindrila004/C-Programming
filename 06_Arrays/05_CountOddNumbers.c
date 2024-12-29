#include<stdio.h>
int countodd(int arr[], int n){
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] % 2 != 0){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    printf("The number of odd numbers are: %d\n",countodd(arr, 6));
    return 0;
}