#include <stdio.h>

int main()
{
	char a[10] = "abcdefghij";
	char *pa = a;

	printf("content of pointer pa   is %p\n", pa);
	printf("value where pa points   to %c\n", *pa);
	printf("content of pointer pa+1 is %p\n", pa+1);
	printf("value where pa+1 points to %c\n", *(pa+1));

	int b[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int *pb = b;

	printf("content of pointer pb   is %p\n", pb);
	printf("value where pb points   to %d\n", *pb);
	printf("content of pointer pb+1 is %p\n", pb+1);
	printf("value where pb+1 points to %d\n", *(pb+1));

	return 0;
}
