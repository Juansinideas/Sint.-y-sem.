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


/*##########################################################################################################
int main()
{
    int largo = sizeof(str)/ sizeof(str[0]);
    for (int i = 0; i < largo; i++)
    {
    printf("%c\n", *(p + 1));
    }
    return 0;
]


#########################################################################################################
*/