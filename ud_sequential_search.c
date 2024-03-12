#include <stdio.h>

/*
 * Create an array of 10 numbers. Ask the user to enter a number. 
 * Using sequential search, search the array to determine whether 
 * the number is present or not. If it is present, return the 
 * position where it was found
 */

int main()
{
	int	arr[10]={1,65,7,156,6,89,94,49,98,23};
	int	i;
	int	j;
	char	check;

	check = 'F';
	printf("Add the number to search for: ");
	scanf("%d", &i);
	j = 0;
	while (arr[j])
	{
		if (i == arr[j])
		{
			check = 'V';
			break;
		}
		j++;
	}
	if (check == 'F')
		printf("The number doesn't exists in the array");
	else if (check == 'V')
		printf("The number exists in the array, and it's position is: %d", j + 1);
}
