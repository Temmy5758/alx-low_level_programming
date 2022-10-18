#include <stdio.h>
/**
*main-entry point
*Return:Always 0 (success)
*/
int main(void)
{
	printf("size of a char: 1 byte(s)\n", sizeof(char));
	printf("size of an int: 4 byte(s)\n", sizeof(int));
	printf("size of a long int: 4 byte(s)\n", sizeof(long int));
	printf("size of a long long int: 8 byte(s)\n", sizeof(long long int));
	return (0);
}
