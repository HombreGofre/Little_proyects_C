#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Create an array of 10 unordered numbers. 
 * Then, sort them using 'bubble sort' and prompt the user for a 
 * data to search in the array using binary search to detect 
 * whether it exists or not.
 */

#define TAM 10

void	swap_arr(int	*i, int	*j)
{
	int	temp;

	temp = *i;
	*i = *j;
	*j = temp;
}

void	ud_bubble_sort(int	*arr, int	i)
{
	int	j;
	int k;

	j = 0;
	while (j < i)
	{
		k = 0;
		while (k < i - j)
		{
			if (arr[k] > arr[k + 1])
				swap_arr(&arr[k], &arr[k + 1]);
			k++;
		}
		j++;
	}
}

char	ud_binary_search(int	*arr, int	num, int	i)
{
	int	left;
	int	rigth;
	int	mid;
	char	ex;

	ex = 'F';
	left = 0;
	rigth = i - 1;
	while (left <= rigth)
	{
		mid = left + (rigth - left) / 2;
		if (arr[mid] == num)
		{
			ex = 'V';
			return (ex);
		}
		else if (arr[mid] < num)
		{
			left = mid + 1;
		}
		else
		{
			rigth = mid - 1;
		}
	}
	return (ex);
}

int main()
{
	int		arr[TAM];
	int		i;
	int		j;
	int		num;
	char	ex;
	time_t	t1;

	srand((unsigned) time (&t1));
	i = 0;
	while (i < TAM)
	{
		arr[i] = rand() % 100;
		i++;
	}
	printf("Original array:\n");
	i = 0;
	while (i < TAM)
	{
		printf("%d ", arr[i]);
		i++;
	}
	ud_bubble_sort(arr, i);
	printf("\nSort array: \n");
	i = 0;
	while (i < TAM)
	{
		printf("%d ", arr[i]);
		i++;
	}
	printf("\nEnter the number to search: ");
	scanf("%d", &num);
	ex = ud_binary_search(arr, num, i);
	if (ex == 'F')
		printf("The number doesn't exist in the array");
	else if (ex == 'V')
		printf("The number exists in the array");
}
