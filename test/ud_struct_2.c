#include <stdio.h>

struct persona{
	char	nombre[20];
	int		edad;
}persona1, persona2;

int main()
{
	printf("Escribe tu nombre: \n");
	gets(persona1.nombre);
	printf("Escribe tu edad: \n");
	scanf("%d",&persona1.edad);


	printf("Su nombre es: %s\n",persona1.nombre);
	printf("Su edad es: %d\n",persona1.edad);
	printf("********************************************\n");
	/*printf("Su nombre es: %s\n",persona2.nombre);
	printf("Su edad es: %d\n",persona2.edad);*/
}

/*
 * En arreglos de structuras, el tratamiento sería algo difernte
 * También a la hora de declararlas y trabajar con ellas.
 *
 * struct persona{
 * 		char	nombre[20];
 * 		int		edad;
 * }persona[x]; //persona[1], persona[2], persona[3]...
 *
 * El declarar de esta manera nos permite trabajar con una gran cantidad de
 * variables sin necesidad de declararlas todas una a una.
 *
 */


