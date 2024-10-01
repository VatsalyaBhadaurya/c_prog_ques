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

// 2. Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop.
// Calculate and print the sum of all the positive integers entered.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, s = 0;

    while (1)
    {
        printf("Enter a number - ");
        scanf("%d", &a);
        if (a == 0)
        {
            break;
        }

        if (a > 0)
        {
            s = a + s;
        }
    }

    printf("Sum of positive integers: %d\n", s);

    return 0;
}
