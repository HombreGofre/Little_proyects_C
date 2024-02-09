#include <stdio.h>

int main()
{
	int	m[2][5];
	int	fl;
	int	cl;

	fl = 0;
	cl = 0;
	printf("Enter the numbers of the matrix\n");
	while (fl < 2)
	{
		while (cl < 5)
		{
			scanf("%d", &m[fl][cl]);
			cl++;
		}
		cl = 0;
		fl++;
	}
	getchar();
	fl = 0;
	cl = 0;
	while (fl < 2)
	{
		while (cl < 5)
			{
				printf("%d ", m[fl][cl]);
				cl++;
			}
		printf("\n");
		cl = 0;
		fl++;
	}
}
