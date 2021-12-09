#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

void forkexample()
{

    // child process because return value zero

    if (fork() == 0)

        printf("Child process executes!\n");



    // parent process because return value non-zero.

    else

        printf(" Parent process executes!\n");
}

int main()
{

    forkexample();

    return 0;
}
