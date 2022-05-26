#include <stdio.h>

int main()
{
	char dir[255];	//DIRECCION DEL ARCHIVO
	printf("Introduce la direccion del fichero:\t");
	fflush(stdin);
	scanf("%s",dir);
	
	FILE * fp = fopen(dir,"w");
	char c;
	c='a';
	while(c<='z')
	{
		fputc(c,fp);
		c++;
	}
	fputc('\n',fp);
	c='A';
	while(c<='Z')
	{
		fputc(c,fp);
		c++;
	}
	fputc('\n',fp);
	fclose(fp);
	return 0;
}
