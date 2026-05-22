#include <stdio.h>

int main()
{
    int num[5];
    int may, min, posmin, posmax;
    
    printf("Ingrese numero: \n");
    scanf("%d", &num);

    may = num[0];
    min = num[0];
    posmin = 1;
    posmax = 1;

    for (int i = 1; i < 5; i++)
    {
        printf("Ingrese numero: \n");
        scanf("%d", &num[i]);
        
        if (num[i] > may)
        {
            may = num[i];
            posmax = i+1;
        }

        if (num[i] < min)
        {
            min = num[i];
            posmin = i+1;
        }

    }
    printf("%d", posmax);
    printf("El numero mayor es: %d y se obtuvo en la posicion: %d\n", may, posmax);
    printf("El numero menor es: %d y se obtuvo en la posicion: %d\n", min, posmin);
    printf("Los otros 3 numeros ingresados son: ");
    for(int i=0;i<5;++i){
        if(i != posmax && i != posmin)
        
        {printf(" %d", num[i]);
        }
    }



    return 0;
}