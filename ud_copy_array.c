#include <stdio.h>

/*
 * In this program, we are going to copy the content of one array to another.
 */

void	copy_array(int	*src, int	*dest)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
}

int main()
{
	int	src[7] = {2,3,4,5,6,7,8};
	int dest[6];
	int	tam;
	int i;

	i = 0;
	tam = sizeof(src) / sizeof(src[0]);
	copy_array(src, dest);
	printf("El array copiado es el siguiente:\n");
	while(i < tam)
	{
		printf("%d ", dest[i]);
		i++;
	}
	return 0;
}

/*
 * Para allar el tamaño correcto del array sin que necesariamente termine en 0 debemos añadir 
 * el condcionante sizeof para detectar el fin del array de int sin que recorra de más ni nos de
 * resultados erroneos.
 */
