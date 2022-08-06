#include<stdio.h>

int main()
{
    char c;
    FILE *f1,*f2;
    char name1[100];
    char name2[100];
    printf("Enter the file1 to open for reading \n");
    scanf("%s", name1);
    printf("Enter the file2 to open for writing \n");
    scanf("%s", name2);
    f1 = fopen(name1, "r");
    f2 = fopen(name2, "a");
    c = fgetc(f1);
    while (c != EOF)
    {
        fputc(c, f2);
        c = fgetc(f1);
    }
}
