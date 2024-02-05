#include <stdio.h>

int main() {

    //* Estos serÃ¡n los 8 datos
    int x[8];

    //* Esto suma los valores
    int total = 0;

    for (int i = 0; i < 8; i++){
        printf("\nDato %d: ",(i+1));
        scanf("%d",&x[i]);
        total += x[i]; //! es igual a poner -> total = total + x[i];
    }

    //? Ahora hacemos el calculo
    float promedio = total/8;
    //* Imprimimos el resultado con 2 digitos decimal
    printf("\n\nEl promedio de los valores es: %.2f",promedio);
    

    return 0;
}
