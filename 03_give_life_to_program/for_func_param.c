#include <stdio.h>

int park_place[10] = {1, 1, 1, 1, 0, 1, 0, 1, 0, 1};

void parking(int place[])
{
	int i;

	for (i = 0; i < 10; i++) {
		if (place[i] == 0) {
			place[i] = 1;
			printf("Park in %d place\n", i);
			break;
		}
	}
}

int main()
{
	parking(park_place);
	parking(park_place);
	return 0;
}
