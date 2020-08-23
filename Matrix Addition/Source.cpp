#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
/*
	https://www.programming.in.th/task/rev2_problem.php?pid=0003
*/
main()
{
	long m, n;
	scanf("%d %d", &m, &n);
	long i, j;
	long mat1[m][n], mat2[m][n], mat3[m][n];
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			scanf("%ld", &mat1[i][j]);
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			scanf("%ld", &mat2[i][j]);
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
		{
			mat3[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
	for (i = 0; i < m; i++)
	{
		for (j = 0; j < n; j++)
			printf("%ld ", mat3[i][j]);
		printf("\n");
	}

	return 0;
}