#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int sum=0,x;
	char frase[50];
	
	printf("Introduzca una frase: ");
	gets(frase);
	
	for(x=0;x<50;x++)
	{
	 if (frase[x]!='\0')
	 { 
	  frase[x]=frase[x]+3;
	 }
	}
	
	printf("\n\nLa nueva frase es:\n\n",sum);
	printf("\n\n%s\n\n",frase);
	printf("\n\n");
	
	return 0;
}
