/* 
 * gcc pointer_memory.c -o pointer_memory
 */
#include <stdio.h>

int main()
{
	char a;
	char *pa = &a;

	printf("address of variable a is %p\n", &a);
	printf("content of pointer pa is %p\n", pa);

	int i = 5, j = 8;
	int *pi = &i;

	printf("address of variable i is %p\n", &i);
	printf("content of pointer pi is %p\n", pi);
	printf("value where pi points to %d\n", *pi);

	pi = &j;

	printf("address of variable j is %p\n", &j);
	printf("content of pointer pi is %p\n", pi);
	printf("value where pi points to %d\n", *pi);

	*pi = 10;

	printf("now the content of j is  %d\n", j);
	printf("value where pi points to %d\n", *pi);
	return 0;
}
