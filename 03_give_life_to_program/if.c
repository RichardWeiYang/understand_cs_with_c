#include <stdio.h>

int main()
{
	int watermelon = 1, peach = 4;

	if (watermelon <= 2)
		printf("Buy a watermelon\n");
	else if (peach <= 5)
		printf("Buy a peach\n");
	else
		printf("Buy nothing\n");

	return 0;
}
