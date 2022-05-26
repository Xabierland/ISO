#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

#define STDOUT 1
#define SIZE 512

int main( int argc, char *argv[] )
{
		
	int fd, readbytes;
	char buffer[SIZE];

    if(argv[1] == NULL)   {
            printf("PARA EL CORRECTO USO DEL PROGRAMA HAY QUE PASARLE LA DIRECCION DE UN ARCHIVO COMO PARAMETRO.\n");
            return -1;
    }

	if( (fd = open( argv[1], O_RDWR )) == -1 )
	{
		perror( "open" );
		exit( -1 );
	}

	while( (readbytes = read( fd, buffer, SIZE )) != 0 )
	{
/*		write( STDOUT, buffer, SIZE ); */
		write( STDOUT, buffer, readbytes );
	}

	close( fd );

	return 0;
}
