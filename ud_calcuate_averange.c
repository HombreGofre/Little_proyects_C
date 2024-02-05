#include <stdio.h>

/*
 * This function averages the numbers we have and returns the result.
 */

int main()
{
	int	i;//contador de posición y cantidad
	int	num; //añadimos los datos
	int	*n;//añadimos los datos al array
	int t; //Sumatorio de los datos
	float prom; //Promedio de los datos

	i = 0;
	num = 0;
	t = 0;
	printf("Add the quantity of numbers:\n");
	scanf("%d", &i);
	printf("Add numbers:");
	while (++num <= i)
	{
		scanf("%d", &n[num]);
		t += n[num];
	}
	prom = t/i;
	printf("The averange of numbers is: %.2f", prom);
}
