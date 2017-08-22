/*
 * gcc datatype_operation.c -o datatype_operation
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
	/* char */
	char c = 'a';
	printf("Character Operations\n");
	printf("\t'a' + 1 = %c\n", c + 1);
	printf("\t'a' + 'b' = %c\n", c + 'b');
	/* int */
	int a = 5, b = 2;
	printf("Integer Operations\n");
	printf("\ta + b = %d\n",a + b);
	printf("\ta - b = %d\n",a - b);
	printf("\ta * b = %d\n",a * b);
	printf("\ta / b = %d\n",a / b);
	/* float */
	float f1 = 5, f2 = 2;
	printf("Float Operations\n");
	printf("\tf1 + f2 = %.2f\n",f1 + f2);
	printf("\tf1 - f2 = %.2f\n",f1 - f2);
	printf("\tf1 * f2 = %.2f\n",f1 * f2);
	printf("\tf1 / f2 = %.2f\n",f1 / f2);
	/* structure */
	struct A sa;
	sa.a = 10;
	sa.b = 2;
	sa.c = 5;
	printf("struct A elements:\n");
	printf("\ta = %d\n", sa.a);
	printf("\tb = %.2f\n", sa.b);
	printf("\tc = %.2f\n", sa.c);
	/* union */
	union B ub;
	ub.b = 10;
	printf("struct A elements:\n");
	printf("\ta = %d\n", ub.a);
	printf("\tb = %.2f\n", ub.b);
	printf("\tc = %.2f\n", ub.c);
	return 0;
}
