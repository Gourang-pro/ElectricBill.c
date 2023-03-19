#include <stdio.h>

int main() 
{
    float units, rate, amount;
    
    printf("\nEnter the number of units consumed: ");
    scanf("%f", &units);
    
    printf("\nEnter the rate per unit: ");
    scanf("%f", &rate);
    
    amount = units * rate;
    
    printf("\nThe total light bill amount is: %.2f", amount);
    
    return 0;
}