#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
 
int main( int argc, char *argv[] )
{
  struct stat estructura;

  if( ( lstat( argv[1], &estructura ) ) < 0 )
  {
    perror( "lstat" );
    exit( -1 );
  }
  printf( "Propiedades del fichero <%s>\n", argv[1] );
  printf( "i-nodo: %ld\n", estructura.st_ino );
  printf( "modo: %#o\n", estructura.st_mode );
  printf( "vinculos: %ld\n", estructura.st_nlink );
  printf( "tipo del dispositivo: %ld\n", estructura.st_rdev );
  printf( "tamaño total en bytes: %ld\n", estructura.st_size );
  printf( "tamaño de bloque preferido: %ld\n",          estructura.st_blksize );
  printf( "numero de bloques asignados: %ld\n",           estructura.st_blocks );
 
  return 0;
}
