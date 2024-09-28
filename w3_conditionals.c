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

// 7. Write a C program to accept the height of a person in centimeters and categorize the person according to their height.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int h;
    printf("Enter height in cm - ");
    scanf("%d", &h);
    if (h < 150)
    {
        printf("YoU are dwarf");
    }
    else
    {
        printf("Height is fine");
    }

    return 0;
}

// 8. Write a C program to find the largest of three numbers.

#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter 3 numbers - ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b && a > c)
    {
        printf("%d is largest ", a);
    }

    else if (b > a && b > c)
    {
        printf("%d is largest ", b);
    }

    else if (c > a && c > b)
    {
        printf("%d is largest ", c);
    }

    else
    {
        printf("All are equal");
    }

    return 0;
}

// 9. Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant the coordinate point lies.

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Enter coordinates - ");
    scanf("%d\n %d", &a, &b);
    if (a > 0 && b > 0)
    {
        printf("1st quardrant");
    }

    else if (a < 0 && b > 0)
    {
        printf("2nd quardrant");
    }

    else if (a < 0 && b < 0)
    {
        printf("3rd quardrant");
    }

    else if (a > 0 && b < 0)
    {
        printf("4th quardrant");
    }

    else
    {
        printf("Origin coordinate");
    }

    return 0;
}

// Write a C program to determine eligibility for admission to a professional course based on the following criteria:
// Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50
// and Total in all three subject >=190 or Total in Maths and Physics >=140

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c, d, e;
    printf("Enter marks in M P C resp - ");
    scanf("%d %d %d", &a, &b, &c);
    d = a + b + c;
    e = a + b;

    if (a >= 56 && b >= 55 && c >= 50 && d >= 190 && e >= 140)
    {

        printf("Eligible for admission");
    }

    else
    {
        printf("Not eligible");
    }

    return 0;
}

//12. Write a C program to read the roll no, name and marks of three subjects and calculate the total, percentage and division.

#include <stdio.h>

int main()
{
    int r, m1, m2, m3, t, p;
    char name[50]; 

    printf("Enter Roll No, Name, Marks in 3 subjects: ");
    scanf("%d %s %d %d %d", &r, name, &m1, &m2, &m3);

    t = m1 + m2 + m3;
    p = (t * 100) / 300; 

    printf("Roll No: %d\n", r);
    printf("Name: %s\n", name);
    printf("Total Marks: %d\n", t);
    printf("Percentage: %d%%\n", p);

    if (p >= 80)
    {
        printf("First Division\n");
    }
    else if (p >= 60)
    {
        printf("Second Division\n");
    }
    else if (p >= 40)
    {
        printf("Third Division\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}

// 13. Write a C program to read temperature in centigrade and display a suitable message according to the temperature state below:
/*Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then Its Very Hot*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    float t;
    printf("Enter temp - ");
    scanf("%f", &t);

    if (t < 0)
    {
        printf("Freezing weather");
    }

    else if (t >= 0 && t < 10)
    {
        printf("Very Cold weather");
    }

    else if (t >= 10 && t < 20)
    {
        printf("Cold weather");
    }

    else if (t >= 20 && t < 30)
    {
        printf("Normal in Temp");
    }

    else if (t >= 30 && t < 40)
    {
        printf("Its Hot");
    }

    else
    {
        printf("Its Very Hot");
    }

    return 0;
}
