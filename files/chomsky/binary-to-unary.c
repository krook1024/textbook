#include <stdio.h>

int main(void)
{
	printf
	    ("Please enter a decimal number you'd like to convert to unary: ");

	unsigned int in = 0;
	scanf("%d", &in);

	for (int i = 0; i < in; ++i)
		printf((i % 5) ? "|" : " |");

	printf("\n");

	return 0;
}
