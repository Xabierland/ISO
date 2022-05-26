#include <stdlib.h> /*atoi and exit*/
#include <stdio.h> /*printf*/
#include <unistd.h> /*alarm*/
#include <signal.h> /*signal and SIGALRM*/
void xtimer()
{
    printf("time expired.\n");
}

int main(int argc, char *argv[])
{
    unsigned int sec;
    sec=atoi(argv[1]);
    printf("time is %u\n",sec);
    signal(SIGALRM,xtimer);
    alarm(sec);
    pause();
    return 0;
}
