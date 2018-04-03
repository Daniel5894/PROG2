#include <stdio.h>
#include <stdlib.h>
int primo(int num)
{
int i,count=0;
for(i=2;i<=num/2;i++)
{
if(num%i==0)
{
count++;
break;	
}	
}
if (count==0)
return 1;
else
return 0;	
}

int main() 
{
int i,num,cont,soma=0;
for(i=0;i<3;i++)
{
printf("Informe um numero:\n");
scanf("%d",&num);
cont++;
soma=soma+num;	
}
printf("%d\n", primo(num));
system ("pause");
return 0;
}
