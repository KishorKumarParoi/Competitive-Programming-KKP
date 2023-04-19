#include <stdio.h>

void sumAndavg(int a, int b, int *sum, double *avg){
	*sum = a + b;
	*avg = (a + b) / 2.0;
}

int main(int argc, char const *argv[])
{
	printf("Hello Jonogon\n");
	int a = 12, b = 21, sum = 0;
	double avg = 0.0;

	sumAndavg(a,b, &sum, &avg);
	printf("Sum is %d and Average is %f\n",sum, avg);

	int *ptr = &a;
	int **ptr_ptr = &ptr;

	printf("%u %u %u %d\n", *ptr_ptr, ptr_ptr, &ptr_ptr, **ptr_ptr);

	return 0;
}