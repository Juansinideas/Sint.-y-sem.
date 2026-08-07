/*Crear un arreglo de caracteres (string) y muestra cada caracter usando
aritmetica de punteros*/

#include <stdio.h>
int main()
{
    char str[]= "hola";
    char *p = str; 

for (int i = 0; str[i] != '\0'; i++) {
    printf("%c\n", str[i]);
}
    printf("\n");
for (int i = 0; str[i] != '\0'; i++) {
    printf(" %c", str[i]);
}
        
    return 0;

}