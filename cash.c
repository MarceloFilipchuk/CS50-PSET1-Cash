#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float dollars;
    int coins = 0;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while(dollars <= 0);
    
    int cents = round(dollars * 100);
        
    if(cents >= 25)
    {
        coins = coins + cents / 25;
        cents = cents % 25;  
    }
    if(cents >= 10)
    {
        coins = coins + cents / 10;
        cents = cents % 10;
    }
    if (cents >= 5)
    {
        coins = coins + cents / 5;
        cents = cents % 5;
    }
    if (cents >= 1)
    {
        coins = coins + cents / 1;
        cents = cents % 1;
    }
    printf("%i\n", coins);
}
