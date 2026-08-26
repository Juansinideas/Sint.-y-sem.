#include <stdio.h>

void invertir(int *arr, int tam ){
   int *inicio = arr;
   int *fin = arr + tam -1;
   int temp;

   while (inicio < fin )
   {
        temp = *inicio;
        *inicio = *fin;
        *fin = temp;
        inicio ++;
        fin --;
   }
   

};

void imprimir(int *arr, int tam){
    for (int i = 0; i < tam; i++)
    {
        printf("%d ", arr[i])
    };
    printf("\n");

};

int main()
{
    int arr[5]= {4,5,2,6,7};

    printf("Original: ");
    imprimir(arr, 5);

    invertir(arr, 5);

    printf("Invertido: ");
    imprimir(arr, 5);


    return 0;
}