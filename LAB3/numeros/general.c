#include <stdio.h>

int ffichnumcarac(char c, FILE *fp)
{
	int i=0;
	while(1)
	{
		if(c==fgetc(fp))
		{
			i++;
		}
		if(feof(fp))
		{
			break;
		}
	}
	return i;
}
