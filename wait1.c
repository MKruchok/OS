#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


int main()
{
    pid_t child1;
    child1 = fork();
    if (child1 != 0) {
        printf("Parent process (P0), pid = %d\n", getpid());
        printf("Child process (P1), pid = %d\n", child1);
    }
    if (child1 == 0) {
        printf("My pid = %d (P1)\n", getpid());
        printf("My parent = %d (P0)\n", getppid());
    }
    wait(NULL);
}
