#include <stdio.h>

void buy_fruit(int watermelon, int peach)
{
	if (watermelon <= 2)
		printf("Buy a watermelon\n");
	else if (peach <= 5)
		printf("Buy a peach\n");
	else
		printf("Buy nothing\n");
}

int main()
{
	int watermelon = 1, peach = 4;

	buy_fruit(watermelon, peach);

	return 0;
}
