#include <stdio.h>

void suma (int a,int b,int *c){
    *c=a+b;    
}
void dividir(int a,int b, int *c){
     *c=a/b;
}
void restar(int a,int b,int *c){
    *c=a-b;
}
int main(){

    int a,b,c;
    int numero;
    do {
    printf("1-Suma\n");
    printf("2-Dividir\n");
    printf("3-Restar\n");
    printf("4-Salir\n");
    printf("Ingrese un numero: ");
    scanf("%d", &numero);
    switch (numero)
    {
    case 1:
    printf("Ingrese su primer numero para sumar: ");
    scanf("%d", &a);
    
    printf("Ingrese su segundo numero para sumar: ");
    scanf("%d", &b);
    suma(a,b,&c);
    printf("Tu suma es: %d\n",c); 
    case 2:
    printf("Ingrese su primer numero para dividir: ");
    scanf("%d", &a);
    
    printf("Ingrese su segundo numero para dividir: ");
    scanf("%d", &b);
    dividir(a,b,&c);
    printf("Tu divicion es: %d\n",c); 
    
    case 3:
    printf("Ingrese su primer numero para restar: ");
    scanf("%d", &a);
    
    printf("Ingrese su segundo numero para restar: ");
    scanf("%d", &b);
    restar(a,b,&c);
    printf("Tu resta es: %d\n",c); 
    
    case 4:
    printf("Chauuu");
    default:
    printf("Tira algo valido");
        sleep(500);
  
    }
} while (numero != 4);
}