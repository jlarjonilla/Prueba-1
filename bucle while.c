#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) 
{
	int n, suma=0;
	
	printf("Introduzca un numero (-1= FIN):");
	scanf("%d",&n);
	while (n!= -1)
	{
		suma = suma +n;
		printf ("Introduzca un numero (-1=FIN):");
		scanf("%d",&n);
	}
	printf ("La suma vale %d \n:",suma);
	system("PAUSE");
	return 0;
}
