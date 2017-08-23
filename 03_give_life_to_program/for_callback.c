#include <stdio.h>

struct ParkPlace {
	int status[10];
};

struct ParkPlace place1 = {
	.status = {1, 1, 1, 1, 0, 1, 0, 1, 0, 1},
};

struct ParkPlace place2 = {
	.status = {1, 0, 0, 1, 0, 1, 0, 1, 0, 1},
};

void parking(struct ParkPlace *p)
{
	int i;

	for (i = 0; i < 10; i++) {
		if (p->status[i] == 0) {
			p->status[i] = 1;
			printf("Park in %d place\n", i);
			break;
		}
	}
}

int main()
{
	parking(&place1);
	parking(&place2);
	
	return 0;
}
