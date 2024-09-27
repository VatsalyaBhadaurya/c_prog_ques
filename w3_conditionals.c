// QUES TAKEN FROM https://www.w3resource.com/c-programming-exercises/conditional-statement/index.php

// 1. Write a C program to accept two integers and check whether they are equal or not.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter 2 numbers - ");
    scanf("%d %d", &a, &b);
    
    if (a == b)
    {
        printf("Equal");
    }

    else
    {
        printf("Not equal");
    }

    return 0;
}

// 2. Write a C program to check whether a given number is even or odd.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number");
    scanf("%d", &a);
    
    if (a % 2 == 0)
    {
        printf("Number is even");
    }
        
    else
    {
        printf("Odd");
    }

    return 0;
}

// 3. Write a C program to check whether a given number is positive or negative.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number - ");
    scanf("%d", &a);

    if (a < 0)
    {
        printf("NEGATIVE");
    }

    else if (a > 0)
    {
        printf("POSITIVE");
    }

    else
    {
        printf("number is 0");
    }

    return 0;
}

// 4. Write a C program to find whether a given year is a leap year or not.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a year - ");
    scanf("%d", &a);

    if (a % 4 == 0)
    {
        printf("Leap year");
    }

    else
    {
        printf("Not a leap year");
    }

    return 0;
}
