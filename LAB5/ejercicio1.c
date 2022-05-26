#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] )
{
  int fd;

  if( (fd = open( argv[1], O_RDONLY )) == -1 )
  {
    perror( "open" );
    exit( -1 );
  }

  printf( "El fichero abierto tiene el descriptor %d.\n", fd );

  close( fd );

  return 0;
}
