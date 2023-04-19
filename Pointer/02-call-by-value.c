#include <stdio.h>

int sum (int a, int b);

int main(int argc, char const *argv[])
{
	printf("Let's Learn call by Value\n");
	int a = 4, b = 8;
	printf("The Value of 4 + 8 is %d\n",sum(a,b));

	return 0;
}

int sum (int a, int b){
	int c = a + b;
	a = 100;
	b = 400;
	return c;    // c will be 12 not 500
}

// call by value      -  sending value of the agrements
// call by reference  -  sending address of the arguments