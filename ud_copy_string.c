#include <stdio.h>
#include <string.h>

/*
 * This function copy an array of strigns to another
 */

void	ud_copy_string(char	*dest,const char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (src[i])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
}

/*int main()
{
	char	src[15]="Hello World";
	char	dest[15];

	ud_copy_string(dest, src);
	printf("El string copiado es el siguiente;\n%s", dest);
}
*/
