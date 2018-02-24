#include <stdio.h>
int funcao (int n1, int n2)
{
int soma=0;
soma = n1+n2;
return (soma);	
}
int main() 
{
int v1,v2,s;
printf ("Informe o primeiro valor:");
scanf ("%d", &v1);
printf("Informe o segundo valor:");
scanf("%d", &v2);
s = funcao (v1,v2);
printf ("Resultado foi %d", s);
return 0;
}
