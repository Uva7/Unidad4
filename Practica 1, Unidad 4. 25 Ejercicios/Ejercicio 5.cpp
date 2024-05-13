#include <stdio.h>
#include <stdio.h>

int main(void)
{
	    int x,cont,z,i,tabla[100];
	    
	    i=0;
	    for (x=1;x<=100;x++)
	    {
	  cont=0;
	  if (x%2==1)
	  {
	  	 tabla[i]=x;
	  	 i++;
	   }
	}
	      
	     for (x=0;x<i;x++)
	     {
	    printf("%d\n",tabla[x]);
	 }
	 
	 system("PAUSE");
	 return 0;
}
