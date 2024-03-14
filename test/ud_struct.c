#include <stdio.h>

struct persona{
	char	nombre[20];
	int		edad;
}
persona1 = {"Camilo",17},
persona2 = {"Juan",25};

int main()
{
	printf("Su nombre es: %s\n",persona1.nombre);
	printf("Su edad es: %d\n",persona1.edad);
	printf("********************************************\n");
	printf("Su nombre es: %s\n",persona2.nombre);
	printf("Su edad es: %d\n",persona2.edad);
}


