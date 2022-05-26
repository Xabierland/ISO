#include <signal.h>
#include <stdio.h>
#include <unistd.h>
void trapper(int);

int main(int argc, char *argv[])
{
	int i=1;
	if(i=19)
		{signal(i, trapper);}
	printf("Identificador del proceso: %d\n", getpid() );
	pause();
	return 0;
}

void trapper(int sig)
{
	printf("\nHOLA\n");
}