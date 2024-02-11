#include <stdio.h>

/*
 * This function show how work char matrix
 * COMO NOTA IMPORTANTE, ESTA ES LA FORMA CORRECTA DE ESCRIBIR UNA MATRIZ CHAR
 */

int main()
{
	char	mt[2][3]= {{'q','w','e'} , {'r','t','y'}};
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 2)
	{
		while (j < 3)
		{
			printf("%c ", mt[i][j]);
			j++;
		}
		printf("\n");
		j = 0;
		i++;
	}
}
