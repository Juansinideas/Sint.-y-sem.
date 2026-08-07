/*intercmabiar el valor de dos variables usando una funcion y punteros*/

#include<stdio.h>
int main()
{
    int a= 5;
    int b=6;
    Intercambio(&a,&b);
    printf("valor de a %d ", a);
    printf("valor de b %d ", b);
    return 0;
}
int Intercambio(int *v1, int *v2) {
    int aux = *v1;
    *v1 = *v2;
    *v2 = aux;
}