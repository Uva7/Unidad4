#include <stdio.h>
#include <stdlib.h>

int main()
{
  float sum, numeros1[10];
  int i;
  
  sum=0;
  for (i=0;i<10;i++){
  	          printf("Escriba un numero");
  	          scanf("%f",&numeros1[i]);
     }
     
  for(i=0;i<10;i++)
  {
   sum=sum+numeros1[i];
  }
  
  printf("%f\n",sum/10);
  
  return 0;
}
