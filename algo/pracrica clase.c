#include <stdio.h>

int main()
{

    char cadena[10];// Equivalente a STRING pero en C xd
///    int countA= 0;
    printf("Ingrese una cadena de caracteres: \n");
///    scanf("%s", cadena);      Puede cambiar el espacio de cadena
    scanf("%10s", cadena);      // Solo lee 10 caracteres
    printf("Leido: %s \n", cadena);
    return 0;

}