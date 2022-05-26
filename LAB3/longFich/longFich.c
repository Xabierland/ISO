#include <stdio.h>

int main()
{
	char dir[255];
	char c;
	printf("Introduce la direccion del fichero\n");
	scanf("%s",dir);
	FILE * fp = fopen(dir,"r");
	int i=0;
	while(1)
	{
		c=fgetc(fp);
		if(feof(fp))
			break;
		i++;
	}
	printf("El numero de Bytes es: %i\n", i);

	//END
	return 0;
}

