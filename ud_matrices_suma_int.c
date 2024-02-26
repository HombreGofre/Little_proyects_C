#include <stdio.h>

/*
 * This function show how plus two matrices
 */

void	plus_matrices(int	mt1[2][3], int	mt2[2][3])
{
	int	sum[2][3];
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < 2)
	{
		while (j < 3)
		{
			sum[i][j] = mt1[i][j] + mt2[i][j];
			j++;
		}
		j = 0;
		i++;
	}
	i = 0;
	j = 0;
	while (i < 2)
	{
		while (j < 3)
		{
			printf("%d ", sum[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}

int main()
{
	int	mt1[2][3]={1,2,3 , 3,2,1};
	int	mt2[2][3]={1,2,3 , 3,2,1};

	plus_matrices(mt1, mt2);
	return 0;
}
