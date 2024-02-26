#include <stdio.h>

/*
 * The program aims to create a matrix by prompting the user for input
 */

int main()
{
	int	mt[50][50];
	int	fl;
	int	cl;
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Numbers of rows: ");
	scanf("%d", &fl);
	printf("Numbers of columns: ");
	scanf("%d", &cl);
	while (i < fl)
	{
		while (j < cl)
		{
			printf("The number at position[%d][%d]", i + 1, j + 1);
			scanf("%d", &mt[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	i = 0;
	j = 0;
	while(i < fl)
	{
		while (j < cl)
		{
			printf("%d ", mt[i][j]);
			j++;
		}
		j = 0;
		i++;
		printf("\n");
	}
}
