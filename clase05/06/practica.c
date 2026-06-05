#include <stdio.h>

int main()
{
    char cadena[10];
    int countA = 0;

    printf("Ingrese una cadena de caracteres: ");
    scanf("%9s", cadena);

    for (int i = 0; cadena[i] != '\0'; i++)
    {
        if (cadena[i] == 'A' || cadena[i] == 'a')
        {
            countA++;
        }
    }

    printf("La letra A aparece %d veces\n", countA);

    return 0;
}