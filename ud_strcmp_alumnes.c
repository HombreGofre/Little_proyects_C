#include <stdio.h>
#include <string.h>

/*
 * This program compares two strings using 'strcmp' function and return 0 is they are equals 
 * or another number if they are not.
 */

int	ud_strcmp(const char	*s1, const char	*s2)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (s1[i])
	{
		if (s1[i] == s2[j])
		{
			i++;
			j++;
		}
		else
			return 1;
	}
	return 0;
}

int	is_digit(int c)
{
	if ("0123456789" == c)
		return 1;
	return 0;
}

int main()
{
	int	al;
	char	gen[30];
	int	m;
	int f;
	int i;

	m = 0;
	f = 0;
	i = 0;
	printf("Indicate the number of students:\n");
	scanf("%d", &al);
	if (is_digit(al) == 1)
		return 0;
	while (i <= al)
	{
		printf("Alumne: %d \n", i);
		fgets(gen, sizeof(gen), stdin);
		if (ud_strcmp("male", gen) == 0)
			m++;
		else if(ud_strcmp("female", gen) == 0)
			f++;
		i++;
	}
	printf("Males: %d\n", m);
	printf("Females: %d\n", f);
}
