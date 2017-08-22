#include <stdio.h>

int main()
{
	int park_place[10] = {1, 1, 1, 1, 0, 1, 0, 1, 0, 1};
	int i;

	for (i = 0; i < 10; i++) {
		if (park_place[i] == 0) {
			park_place[i] = 1;
			printf("Park in %d place\n", i);
			break;
		}
	}

	return 0;
}
