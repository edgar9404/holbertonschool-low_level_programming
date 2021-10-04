#include <stdio.h>
/*
 * main - start function of the program
 *
 * return: (0)
 *
 */
int main(void)
{
	int charSize = sizeof(char);
	int doubleSize = sizeof(double);
	int floatSize = sizeof(float);

	printf("size of a char: %d byte(s)\n", charSize);
	printf("size of a double: %d", doubleSize);
	printf("size of a float: %d", floatSize);

	return (0);
}
