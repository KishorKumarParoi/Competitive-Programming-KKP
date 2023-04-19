#include <stdio.h>

int main(int argc, char const *argv[])
{
	int a;
	scanf("%d", &a);

	int *ptr = &a;
	printf("The address of variable is %u & value is %d\n", &a, *ptr);

	return 0;
}