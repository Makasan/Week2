#include<stdio.h>
#include<cstdlib>
#define _CRT_SECURE_NO_WARNINGS
/*
	Create a diamond .
	It has a diagonal size equal to 2*n-1.

-Input
	1 line : 5

-Output
	1 line : Diamond shape ( With a diagonal of 9 )

-Example
 Input : 5

 Output :     *
			 * *
			* * *
		   * * * *
		  * * * * *
		   * * * *
			* * *
			 * *
			  *

*/
int main() {
	int n;
	scanf("%d", &n);
	if (n <= 0)
	{
		printf("Error");
	}
	else
	{
		for (int i = 1; i <= n; i++)
		{
			for (int j = 0; j < n - i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
		for (int i = 1; i < n; i++)
		{
			for (int j = 0; j < i; j++)
			{
				printf(" ");
			}
			for (int j = 0; j < n - i; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}