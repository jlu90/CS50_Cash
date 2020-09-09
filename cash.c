#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    float change_owed;
    do
    {
        change_owed = get_float("Change owed: ");
    }
    while (change_owed < 0.00);

    int total_change = round(change_owed * 100);

    int coins = 0;
    int rmdr = 0;
   
    if (total_change >= 25)
    {
        int quarters = trunc(total_change / 25);
        rmdr = total_change % 25;
        total_change = rmdr;
        coins += quarters;
   }

   if (total_change < 25 && total_change >= 10)
   {
        int dimes = trunc(total_change / 10);
        rmdr = total_change % 10;
        total_change = rmdr;
        coins += dimes;
   }

   if (total_change < 10 && total_change >= 5)
   {
       int nickles = trunc(total_change / 5);
       rmdr = total_change % 5;
       total_change = rmdr;
       coins += nickles;
   }

   if (total_change < 5 && total_change >= 1)
   {
       int pennies = total_change;
       coins += pennies;
   }

   if (total_change == 0)
   {
      coins += 0;
   }

    printf("%d \n", coins);

}
