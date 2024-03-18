#include <stdio.h>

#define TAM 30

struct	infoDir{
	char	direccion[TAM];
	char	ciudad[TAM];
	char	provincia[TAM];
};
struct	empleado{
	char	nombre[TAM];
	struct	infoDir dirEmpleado;
	double salario;
}empleado[2];

int main()
{
	int	i;
	int	j;

	i = 0;
	while (i < 2)
	{
		getchar();

		printf("(%d)Escribe tu nombre: ", i + 1);
		gets(empleado[i].nombre);
		printf("(%d)Escribe tu dirección: ", i + 1);
		gets(empleado[i].dirEmpleado.direccion);
		printf("(%d)Escribe tu ciudad: ", i + 1);
		gets(empleado[i].dirEmpleado.ciudad);
		printf("(%d)Escribe tu provincia: ", i + 1);
		gets(empleado[i].dirEmpleado.provincia);
		printf("(%d)Escribe tu salario: ", i + 1);
		scanf("%1f", &empleado[i].salario);
		i++;
	}
	j = 0;
	while (j < 2)
	{
		printf("\nDatos el empleado número: %d", j + 1);
		printf("\nEl empleado %d se llama: %s", j + 1, empleado[j].nombre);
		printf("\nEl empleado %d vive en la dirección: %s", j + 1, empleado[j].dirEmpleado.direccion);
		printf("\nLa ciudad del empleado %d es: %s", j + 1, empleado[j].dirEmpleado.ciudad);
		printf("\nLa provincia del empleado %d es: %s", j + 1, empleado[j].dirEmpleado.provincia);
		printf("\nEl empleado %d gana: %2.f€", j + 1, empleado[j].salario);
		j++;
	}
}
