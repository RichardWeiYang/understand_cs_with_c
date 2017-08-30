#include <stdio.h>

enum {
	APPLE,
	ORANGE,
	BANANA,
	WATERMELON,
};

int main()
{
	int i = 1, type;

	switch (i) {
	case 1:
		printf("i is 1\n");
		break;
	case 2:
		printf("i is 2\n");
		break;
	case 3:
		printf("i is 3\n");
		break;
	case 4:
		printf("i is 4\n");
		break;
	default:
		printf("i is out of range\n");
		;

	}

	type = APPLE;
	switch (type) {
	case APPLE:
		printf("I'm APPLE\n");
		break;
	case ORANGE:
		printf("I'm ORANGE\n");
		break;
	case BANANA:
		printf("I'm BANANA\n");
		break;
	case WATERMELON:
		printf("I'm WATERMELON\n");
		break;
	default:
		printf("out of my knowledge\n");
		;

	}
	return 0;
}
