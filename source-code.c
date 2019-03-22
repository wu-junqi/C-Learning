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
/*
int main(void)
{
	printf("Size of short int is %d\n",sizeof(short int));
	printf("Size of int is %d\n",sizeof(int));
	printf("Size of long int is %d\n",sizeof(long int));
	printf("Size of long long int is %d\n",sizeof(long long int));
	printf("Size of unsigned int is %d\n",sizeof(unsigned int));

	return 0;
}*/
/*
int main(void)
{
	for (unsigned int x = 0; x < 3; x++)
	{
		for (unsigned int i = 0; i < 16; i++)
		{
			if (x == 0)
			{
				printf("%#o\t", i);
				// %o unsigned octal integer
				// %#o starting at 0
			} else if (x == 1)
			{
				printf("%d\t", i);
				// %d decimal integer
			} else
			{
				printf("%#x\t", i);
				// %x %X unsigned hexadecimal integer
				// %#x %#X starting at 0x or 0X
			}
		}
		printf("\n");
	}

	return 0;
}*/
/*
int main(void)
{
	int i = 2147483647;
	unsigned int j = 4294967295;

	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u\n", j, j + 1, j + 2);
	// %u unsigned decimal integer
	return 0;
}*/
/*
int main(void)
{
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long verybig = 12345678908642;

	printf("un = %u and not %d\n", un, un);
	printf("end = %hd and not %d\n", end, end);
	printf("big = %ld and not %hd\n", big, big);
	printf("verybig = %lld and not %ld\n", verybig, verybig);

	return 0;
}*/

int main(void)
{
	char beep = 7;
	char nerf = '\n';
	char quote = '\"';

	printf("Listen to the beep.%c\n", beep);
	printf("I want you to%cstudy hard\n", nerf);
	printf("%cApple%c is not an apple.\n", quote, quote);

	return 0;
}