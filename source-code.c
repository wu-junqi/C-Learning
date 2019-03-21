#include <stdio.h>

/*int main(void)
{
	float a = 3.4;
	float b = 3.4e3;
	float c = 3.0;
	float d = 3.3e-2;

	printf("a = %.5f\n", a);
	printf("b = %.5f\n", b);
	printf("c = %.5f\n", c);
	printf("d = %.5f\n", d);

	return 0;
}*/
/*
int main(void)
{
	int ten = 10;
	int two = 2;

	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n", ten);
	printf("Doing it right: ");
	printf("%d minus %d is %d\n", ten, two, ten - two);

	return 0;
}*/

int main(void)
{
	printf("Size of short int is %d\n",sizeof(short int));
	printf("Size of int is %d\n",sizeof(int));
	printf("Size of long int is %d\n",sizeof(long int));
	printf("Size of long long int is %d\n",sizeof(long long int));
	printf("Size of unsigned int is %d\n",sizeof(unsigned int));

	return 0;
}