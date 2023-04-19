#include <stdio.h>
int main(int argc, char const *argv[])
{
	int a; 
	scanf("%d", &a);

	int *ptr = &a;
	int **ptr_ptr = &ptr;

	printf("%d\n", ptr_ptr);
	printf("%d\n", ptr_ptr);
	printf("%d\n", ptr_ptr);

	printf("%u %u %d\n", ptr_ptr, &ptr_ptr, *ptr_ptr);
	printf("%u %u %d\n", ptr, &ptr, *ptr);
	printf("%u %u %d\n", a, &a, a);
	return 0;
}