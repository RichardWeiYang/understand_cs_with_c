/* 
 * gcc struct_pointer_memory.c -o struct_pointer_memory
 */
#include <stdio.h>

struct A {
	int a;
	float b;
	double c;
};

int main()
{

	struct A sa;
	struct A *psa;
	sa.a = 10;
	sa.b = 5;
	sa.c = 2;
	psa = &sa;
	printf("===  Pointer of struct\n");
	printf("address of variable sa is %p\n", &sa);
	printf("content of pointer psa is %p\n", psa);
	printf("the content of sa.a    is  %d\n", sa.a);
	printf("the content of psa->a  is  %d\n", psa->a);

	psa->a = 8;
	printf("the content of sa.a    is  %d\n", sa.a);
	printf("the content of psa->a  is  %d\n", psa->a);
	return 0;
}
