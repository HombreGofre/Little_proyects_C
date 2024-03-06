#include <stdio.h>

/*
 * Copy the content of one array to another using a variable to determine 
 * the amount to copy
 */
#define TAM 20
void	uf_copy_n(int	*arr1, int	*arr2, size_t	n)
{
	int	i;
	int j;

	i = 0;
	if	(n > 0)
	{
		while (n > 0)
		{
			arr2[i] = arr1[i];
			i++;
			n--;
		}
	}
	arr2[i] = '\0';
}

int main()
{
	int		arr1[TAM] = {1,2,3,4,5,6,7,8,9};
	int		arr2[TAM];
	size_t	i;

	i = 0;
	uf_copy_n(arr1, arr2, 6);
	while(arr2[i])
	{
		printf("%d, ", arr2[i]);
		i++;
	}
}
