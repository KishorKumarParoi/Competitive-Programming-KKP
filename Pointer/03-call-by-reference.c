#include <stdio.h>

void swap(int *a, int *b);
void wrong_swap(int a, int b);

int main(int argc, char const *argv[])
{
	printf("Let's learn call by reference\n");
	// int a = 9, b = 10;
	int a, b;

	printf("Enter a : ");
	scanf("%d\n", &a);

	printf("Enter b : ");
	scanf("%d\n", &b);

	printf("\nThe Value of a is %d and b is %d\n",a, b);


	wrong_swap(a,b);
	printf("After wrong_swap : The Value of a is %d and b is %d\n",a, b);
	swap(&a, &b);
	printf("After swap : The Value of a is %d and b is %d\n",a, b);

	return 0;
}

void wrong_swap(int a, int b){
	int tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

// call by reference - seding address to the parameter