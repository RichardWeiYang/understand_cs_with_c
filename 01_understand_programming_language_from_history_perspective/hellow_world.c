/*
 * gcc -g hellow_world.c -o hellow_world
 *
 * objdump -S hellow_world > hellow_world.s
 */



#include <stdio.h>

int main()
{
	printf("Hello World\n");
	return 0;
}
