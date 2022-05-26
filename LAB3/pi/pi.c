#include <stdio.h>
#define PI 3.1415
int main ()
{
	char c;
	printf("¿Quieres conocer al número PI? (S/N)");
	c=getchar();
	if (c=='S' || c=='s') 
		printf("%f\n",PI);
	else
		printf("Agur\n");
	return 0;
}
