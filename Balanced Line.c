//Nome: Daniel Guimarães Faria - Sistemas de Informação (Unilasalle)
//Matrícula: 0050010533

#include <stdio.h> 
#include <string.h>

int main()
{
char nome1[100];
char nome2[100];
printf("\nEntre com o nome do arquivo 1:");
gets(nome1);
printf("\nEntre com o nome do arquivo 2:");
gets(nome2);
FILE *arq1=fopen(nome1, "r");
FILE *arq2=fopen(nome2, "r");
FILE *arq3=fopen("arq3.txt", "w");
char linha1[100];
char linha2[100];
fgets(linha1, sizeof(linha1),arq1);
fgets(linha1, sizeof(linha1),arq1);
fgets(linha2, sizeof(linha2),arq2);
fgets(linha2, sizeof(linha2),arq2);

while(!feof(arq1) && !feof(arq2))
{
fgets(linha1, sizeof(linha1),arq1);
fgets(linha2, sizeof(linha2),arq2);
 if(strcmp(linha1, linha2) ==-1)
   {
        fprintf(arq3, "%s\n", linha1);
        fprintf(arq3, "%s\n", linha2);
   } 
}

while(!feof(arq2))
{
fgets(linha2, sizeof(linha2),arq2);
fprintf(arq3, "%s\n", linha2);
}
fclose(arq1);
fclose(arq2);
fclose(arq3);
return 0;
}
