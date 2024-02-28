#include <stdio.h>
#include <stdlib.h>

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

	j = 0;
	i = 0;
	num[j] = rand() % 100;
	while (j < 100)
	{
		printf("%d ", num[i]);
		i++;
	}
}
