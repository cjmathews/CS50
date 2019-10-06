#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)

{
	int coins = 0, money, cents;
	float change;
	
	do
	{
		printf ("How much change is owed?\n");
		change = GetFloat();
		cents = roundf (change*100);
	}
	while (change < 0);
	
//	cents = change;
	
	money=25;
		coins = coins + cents/money;
		cents = cents % money;
	money=10;
		coins = coins + cents/money;
		cents = cents % money;
	money=5;
		coins = coins + cents/money;
		cents = cents % money;
	money=1;
		coins = coins + cents/money;
		cents = cents % money;
	printf ("%i\n", coins);
}