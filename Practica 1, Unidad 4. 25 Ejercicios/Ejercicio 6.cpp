#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int x,tabla[10];
	int sum,res,mul,div;
	
	for (x=0;x<10;x++)
	{
 printf("Introduzca numero\n");
 scanf("%d",&tabla[x]);
}
    
    sum=tabla[0];
res=tabla[0];
mul=tabla[0];
div=tabla[0];

     for (x=1;x<10;x++)
     {
sum=sum+tabla[x];
res=res-tabla[x];
mul=mul*tabla[x];
div=div/tabla[x];
}  
    printf("Suma: %d\n",sum);
    printf("Resta: %d\n",res);
    printf("Mutiplicacion: %d\n",mul);
    printf("Division: %d\n",div);
    
system("PAUSE");
return 0;
}
