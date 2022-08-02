#include<stdio.h>
int main()
{
    char c;
    FILE *f1,*f2;
    f1 = fopen("F1.txt", "r");
    f2 = fopen("F2.txt", "a");
    c = fgetc(f1);
    while (c != EOF)
    {
        fputc(c, f2);
        c = fgetc(f1);
    }
}
