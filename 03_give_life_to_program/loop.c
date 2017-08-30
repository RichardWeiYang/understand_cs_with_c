#include <stdio.h>

int main()
{
	int i, sum;

	/* for loop */
	for (i = 0, sum = 0; i < 10; i++)
		sum += i;
	printf("sum is %d\n", sum);

	/* while loop */
	i = 0, sum = 0;
	while (i < 10) {
		sum += i;
		i++;
	}
	printf("sum is %d\n", sum);

	/* do...while loop */
	i = 0, sum = 0;
	do {
		sum += i;
		i++;
	} while (i < 10);
	printf("sum is %d\n", sum);

	return 0;
}
