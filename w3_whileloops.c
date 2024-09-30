// 1. Write a C program to print numbers from 0 to 10 and 10 to 0 using two while loops.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a = 0, b = 10;
    while (a <= 10)
    {
        printf("%d\n", a);
        ++a;
    }

    while (b >= 0)
    {
        printf("%d\n", b);
        --b;
    }

    return 0;
}
