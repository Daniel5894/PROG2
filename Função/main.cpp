#include <stdio.h>
int funcao (int n1, int n2)
{
int soma=0;
soma = n1+n2;
return soma;	
}
int main() 
{
int n1,n2,s;
printf ("Informe o primeiro valor:");
scanf ("%d", &n1);
printf("Informe o segundo valor:");
scanf("%d", &n2);
s = funcao (n1,n2);
printf ("A soma foi de:", s);
system ("pause");
return 0;
}
