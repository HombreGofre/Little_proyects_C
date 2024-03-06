#include <stdio.h>

/*
 * Create an integer array of size 2*2, fill it with numbers, 
 * and then copy its entire contents into another array
 */

#define TAM 10

void	ud_copy_matrix(int	src[TAM][TAM], int	dest[TAM][TAM], int	rw, int	cl)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while(i < rw)
	{
		while (j < cl)
		{
			dest[i][j] = src[i][j];
			j++;
		}
		i++;
		j = 0;
	}
}

void	print_matrix(int	mt[TAM][TAM], int	rw, int	cl)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < rw)
	{
		while (j < cl)
		{
			printf("%d ", mt[i][j]);
			j++;
		}
		i++;
		j = 0;
		printf("\n");
	}
}

int main()
{
	int	src[TAM][TAM];
	int	dest[TAM][TAM];
	int	rw;
	int	cl;
	int	i;
	int j;

	printf("Numbers of rows: ");
	scanf("%d", &rw);
	printf("Numbers of colums: ");
	scanf("%d", &cl);
	i = 0;
	j = 0;
	while (i < rw)
	{
		while (j < cl)
		{
			printf("Fill it with the numbers [%d][%d]", i + 1, j + 1);
			scanf("%d", &src[i][j]);
			j++;
		}
		j = 0;
		i++;
	}
	print_matrix(src, rw, cl);
	ud_copy_matrix(src, dest, rw, cl);
	printf("*************************\nCopy:\n");
	print_matrix(dest, rw, cl);
}
