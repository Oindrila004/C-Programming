#include<stdio.h>
int main()
{
    int cost_price, selling_price;
    printf("Enter item's cost price: ");
    scanf("%d",&cost_price);
    printf("Enter item's selling_price: ");
    scanf("%d",&selling_price);
    if(cost_price > selling_price){
        printf("LOSS!!");
    }
    else if (cost_price == selling_price)
    {
        printf("No profit, No loss");
    }
    else{
        printf("PROFIT!!");
    }
    return 0;
}