#include <sys/types.h> /*kill y wait*/
#include <sys/wait.h> /*wait*/
#include <signal.h>/*kill*/
#include <stdlib.h>/*exit*/
#include <stdio.h>/*printf*/
#include <unistd.h>/*fork and exec...*/
#include <time.h> /*time*/
int main(int argc, char *argv[])
{
    int idHijo, idReloj, id, t1, status1, status2;
    id = getpid();
    printf("Proceso padre: %d\n", id);
    idReloj = fork();
    if(idReloj == 0) 
    { /* hijo Reloj */
        execl("reloj", "reloj", argv[1], NULL);
    }
    idHijo = fork();
    if((idHijo == 0))
    { 
        execv(argv[2], &argv[2]);
    }
    printf("Proceso hijo Perezoso: %d\n", idHijo); 
    printf("Proceso hijo Reloj: %d\n", idReloj);
    t1 = time(0);
    if((id = wait(&status1)) == idHijo) 
    { 
        kill(idReloj, SIGKILL);
        //Si el hijo ha cambiado de estado, antes de la ejecución del wait 
        //entonces la llamada a wait retornará inmediatamente con su estado
        wait(&status2);
    } 
    else 
    {
        kill(idHijo, SIGKILL);
        wait(&status2);
        status1 = 1;
    }
    t1=time(0)-t1;
    printf("Tiempo del proceso hijo : %d\n", t1);
    exit(status1);
}
