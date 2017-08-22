#include <stdio.h>

int park_place[10] = {1, 1, 1, 1, 0, 1, 0, 1, 0, 1};

void parking()
{
	int i;

	for (i = 0; i < 10; i++) {
		if (park_place[i] == 0) {
			park_place[i] = 1;
			printf("Park in %d place\n", i);
			break;
		}
	}
}

int main()
{
	parking();
	parking();
	return 0;
}
