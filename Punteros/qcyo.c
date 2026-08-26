#include <stdio.h>
void MostrarStrings(char *arr[], int size)
{
    for (int i = 0; i < size; i++)
}
int main()

{
    int a = 10, b =20, c= 30;
    int *ptrs[3];
    ptrs[0] = &a;
    ptrs[1] = &b;
    ptrs[2] = &c;

    for (int i =0; i < 3; i++)
    {
        printf("valor %d: %d\n", i, *ptrs[i]);
    }
    return 0;
}