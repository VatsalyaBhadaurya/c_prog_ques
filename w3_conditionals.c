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

// 5. Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own vote.

#include <stdio.h>

int main(int argc, char const *argv[])
{

    int a;
    printf("Enter yoUR DOB - ");
    scanf("%d", &a);

    if (a <= 2006)
    {
        printf("You are eligible for vote");
    }

    else
    {
        printf("Sorry you are not eligible");
    }

    return 0;
}

// 6. Write a C program to read the value of an integer m and display the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when m is less than 0.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter a number - ");
    scanf("%d", &a);
    if (a > 0)
    {
        printf("value of %d is 1 ", a);
    }

    else if (a = 0)
    {
        printf("Value of %d is 0", a);
    }

    else
    {
        printf("Value of %d is -1", a);
    }

    return 0;
}
