#include <stdio.h>
#include <string.h>

#define TAM 20
int main()
{
	char	src[TAM];
	char	dest[TAM];
	int i;
	int j;

	printf("Introduce el texto a copiar; \n");
	fgets(src, sizeof(src), stdin);
	getchar();
	i = 0;
	j = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	printf("El texto cpiado es el siguiente; %s", dest);
	return 0;
}
