#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	printf("Hello World\n");
	int i = 8;
	int *int_ptr = &i;
	float j = 106.12;
	float j2 = 1026.12;
	float *float_ptr = &j;
	float *float_ptr2 = &j2;
	char c = 'a';
	char name[110];
	char *name_ptr = name;
	char *char_ptr = &c;
	char **pointer_to_name_ptr = &name_ptr;

	strcpy(name, "Kishor Kumar Paroi");

	printf("%d %u %u\n",i, int_ptr, &int_ptr);
	printf("%f %u %u\n",j, float_ptr, &float_ptr);
	printf("%f %u %u\n",j2, float_ptr2 , &float_ptr2);
	printf("%c %u %u\n",c, char_ptr, &char_ptr);
	printf("%s %u %u %u\n", name, name_ptr, &name_ptr, *(name_ptr));
	printf("%s %s %u\n",pointer_to_name_ptr, *pointer_to_name_ptr, &pointer_to_name_ptr );
	return 0;
}