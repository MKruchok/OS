#include "stdio.h"
#include "unistd.h"

#define COUNT 15

int main() {
    char buff[COUNT + 1];
    int count = read(STDIN_FILENO, buff, COUNT);
    printf("Length of input is: %d\n", count);
    write(STDOUT_FILENO, buff, count);
}