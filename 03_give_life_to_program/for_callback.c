#include <stdio.h>

struct ParkPlace {
	int status[10];
	void (*action)(int i);
};

void place1_action(int i)
{
	printf("Get place (%d) in Lujiazui\n", i);
}

void place2_action(int i)
{
	printf("Place(%d) is reserved at IAPM \n", i);
}

struct ParkPlace place1 = {
	.status = {1, 1, 1, 1, 0, 1, 0, 1, 0, 1},
	.action = place1_action,
};

struct ParkPlace place2 = {
	.status = {1, 0, 0, 1, 0, 1, 0, 1, 0, 1},
	.action = place2_action,
};

void parking(struct ParkPlace *p)
{
	int i;

	for (i = 0; i < 10; i++) {
		if (p->status[i] == 0) {
			p->status[i] = 1;
			p->action(i);
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
