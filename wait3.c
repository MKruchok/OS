#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/wait.h>


int main()
{
    pid_t child1, child2;
    child1 = fork();
    if (child1 == 0) {
        printf("My pid = %d (P1), my parent = %d\n", getpid(), getppid());
        return 0;
    }
    else {
        child2 = fork();
        if (child2 == 0){
            printf("My pid = %d (P2), my parent = %d\n", getpid(), getppid());
            return 0;
        }
        wait(NULL);
        wait(NULL);
        printf("Parent process (P0), pid = %d\n", getpid());
    }
}
