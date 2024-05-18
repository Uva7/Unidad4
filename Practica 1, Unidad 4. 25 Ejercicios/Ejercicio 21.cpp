#include <stdio.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	
	int sum=0,x;
	char frase[50];
	
	printf("Introdusca una frase: ");
	
	for(x=0;x<50;x++)
	{
	 switch (frase[x])
	 {
	 	case 'a':
	 	   sum++;
	 	   break;
	 	case 'e':
	 	   sum++;
	 	   break;
	 	case 'i':
	 	   sum++;
	 	   break;
	 	case 'o':
	 	   sum++;
	 	   break;
	 	case 'u':
	 	   sum++;
	 	   break;
	 	default:
	 	   break;
	 }
	}
	
	printf("\n\nEn la frase hay %d vocales\n\n",sum);
	
	printf("\n\n");
	
	return 0;
}
