#include <stdio.h>
#include <stdlib.h>
int main()
{
int n, *numeros;
int x, y, temp;
printf("Digite um numero: \n");
scanf("%d", &n);
numeros = (int *) malloc(n * sizeof(int));
printf("Agora digite %d numeros: \n", n);
for (x=0; x<n; x++)
scanf("%d", &numeros[x]);
if (x==n)
for (x=0; x<n; x++)
for (y=0; y<n; y++)
if (numeros[x] < numeros[y])
{
temp = numeros[x];
numeros[x] = numeros[y];
numeros[y] = temp;
}
if (x==n)
printf("Agora em ordem crescente: \n");
for (x=0; x<n; x++)
printf("%d\n", numeros[x]);
    return 0;
}
