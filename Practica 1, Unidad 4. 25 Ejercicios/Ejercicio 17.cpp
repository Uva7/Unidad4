#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	
	int x,y,sum, numeros[11][10];
	
	for (y=0;y<10;y++)
	{
		sum=0;
		for (x=0;x<10;x++)
		{
			numeros[x][y]=(x*10)+1+y;
			sum=sum+numeros[x][y];
		}
		numeros[10][y]=sum;
	}
	
	for (x=0;x<11;x++)
	{
		for (y=0;y<10;y++)
		{
			printf("%d",numeros[x][y]);
		}
		printf("\n");
	}
	
	return 0;
}
