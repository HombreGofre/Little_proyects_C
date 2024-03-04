#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Create a program that adds random numbers to an array of integers and 
 * separates them into even and odd.
 */

int main()
{
	int	num[100];
	int	even[100];
	int odd[100];
	int i;
	int	j;
	int k;
	time_t	t1;

	srand((unsigned) time (&t1));
	j = 0;
	i = 0;
	k = 0;
	while (j < 100)
	{
		num[j] = rand() % 100;
		if (num[j] % 2 == 0)
		{
			even[i] = num[j];
			i++;
		}
		else if (num[j] % 2 != 0)
		{
			odd[k] = num[j];
			k++;
		}
		printf("%d ", num[j]);
		j++;
	}
	printf("\n************************************ \n");
	i = 0;
	while (even[i])
	{
		printf("%d ", even[i]);
		i++;
	}
	printf("\n************************************ \n");
	k = 0;
	while (odd[k])
	{
		printf("%d ", odd[k]);
		k++;
	}
}
