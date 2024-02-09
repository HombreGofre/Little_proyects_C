#include <stdio.h>

int main()
{
	int	m[3][5]={5,4,3,2,1 , 1,2,3,4,5 , 6,7,8,9,0};
	int	fi;
	int	cl;

	fi = 0;
	cl = 0;
	while(fi < 3)
	{
		while (cl < 5)
		{
			printf("%d ", m[fi][cl]);
			cl++;
		}
		printf("\n");
		cl = 0;
		fi++;
	}
}
