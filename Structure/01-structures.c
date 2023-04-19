#include <stdio.h>
#include <string.h>

struct employee{
	int code;
	float salary;
	char Name[77];
};

int main(){
	printf("Hello World\n");

	struct employee e1;
	e1.code = 100;
	e1.salary = 500000;
	// e1.Name = "Kishor";    // wont't work

	strcpy(e1.Name, "Kishor");
	printf("%s\n", e1.Name);
	printf("%d\n", e1.code);   // (.) dot is member operator

	

	return 0;
}