#include <stdio.h>

#define TAM 20
int main()
{
	char	src[TAM];
	char	aux[TAM];
	int	i;
	int	j;

	i = 0;
	j = 0;
	printf("Introduce la palabra: ");
	fgets(src, sizeof(src), stdin);
	while (src[i] != '\0')
		i++;
	printf("La palabra tiene %d letras.\n", i);
	i = i - 1;
	while (src[i] > 0)
	{
		aux[j] = src[i];
		i--;
		j++;
	}
	printf("%s ", src);
	aux[j] = '\0';
	printf("%s ", aux);
}
