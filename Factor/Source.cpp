#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
/*
	Find the factor of 1 number.

-Input
	1 line : number

-Output
	1 line : factor of number

-Example
 Input : 64500

 Output : 2 x 2 x 3 x 5 x 5 x 5 x 43
*/
int main() {
	int factor, i;
	scanf("%d", &factor);
	if (factor > 0)
	{
		if (factor == 1)
		{
			printf("1");
			return 0;
		}
		else
		{
			for (i = 2; i < factor; i++)
			{
				if (factor % i == 0)
				{
					printf("%d x ", i);
					factor /= i;
					i = 1;
				}
			}
			printf("%d", i);
		}
	}
	else
	{
		printf("Error");
	}
	return 0;
}
