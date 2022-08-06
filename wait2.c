#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>


int main()
{
    char str1[100];
    pid_t child1;
    FILE *f1;
    child1 = fork();
    if (child1 == 0) {
        fopen("Relation.txt", "a");
    }else {
        wait(NULL);
        f1 = fopen("Relation.txt", "w");
        scanf("%99s", str1);
        fprintf(f1, "%s", str1);
    }
}
