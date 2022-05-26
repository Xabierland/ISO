#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char *args[]={"/bin/mkdir","/home/xabierland/lana",NULL};
    if (execve("/bin/mkdir",args,NULL)==-1)
    {
        perror("execve");
        exit(EXIT_FAILURE);
    }
    puts("No debería llegar aquí");
    exit(EXIT_SUCCESS);
}
