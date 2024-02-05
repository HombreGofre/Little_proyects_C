#include <stdio.h>

/*
 * This function averages the numbers we have and returns the result.
 * USA SIZE_T
 */

int main()
{
	int	i;//contador de  poición y añadimos los datos
	int	*n;//añadimos los datos 
	int t;
	float prom;

	printf("Add the quantity of numbers:\n");
	scanf("%d", &i);
	printf("Add numbers:");
	while (i-- > 0)
	{
		scanf("%d", &n[i]);
		t += n[i];
	}
	prom = t/i;
	printf("The averange of numbers is: %d", &prom);
}
