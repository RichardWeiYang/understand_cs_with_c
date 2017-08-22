/*
 * gcc -g struct_pointer_operation.c 
 */
#include <stdio.h>

struct A {
	int a;
	float b;
	double c;
};

int main()
{
	struct A sa[10];
	struct A *psa = sa;
	printf("=== struct pointer operation\n");
	printf("content of pointer psa   is %p\n", psa);
	printf("content of pointer psa+1 is %p\n", psa+1);
	return 0;
}
