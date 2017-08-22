/*
 * gcc datatype_memory.c -o datatype_memory
 */
#include <stdio.h>

struct A {
	int a;
	float b;
	double c;
};

union B {
	int a;
	float b;
	double c;
};

int main()
{
	printf("sizeof(char)   = %lu\n", sizeof(char));
	printf("sizeof(short)  = %lu\n", sizeof(short));
	printf("sizeof(int)    = %lu\n", sizeof(int));
	printf("sizeof(float)  = %lu\n", sizeof(float));
	printf("sizeof(double) = %lu\n", sizeof(double));
	printf("sizeof(A)      = %lu\n", sizeof(struct A));
	printf("sizeof(B)      = %lu\n", sizeof(union B));
	return 0;
}
