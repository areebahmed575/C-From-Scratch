#include <stdio.h> //--- > Preprocessor directive

int main()
{ 
    printf("Hello world");
    return 0;
}

// gcc hello.c ---> it will compile file
// ./a.exe  --- > it will create a.exe file

// Variables
int main()
{
    int age = 22;
    age = 24; // redeclare

    char star = "*";
    float pi = 3.14;

    int a = 30; // variables case sensitive
    int A = 40;

    int _age = 22;         // 1st character of variable is alphabet or _
    int final_price = 500; // No other symbol other than "_"
}

/* Datatypes */
// C don't have string and boolean datatypes

// Output cases
int main()
{
    int age = 22;
    printf("age is %d", age);
    printf("age is %d \n", age);

    float pi = 3.14;
    printf("pi is %f \n", pi);

    char star = "*";
    printf("star is %c \n", star);

    return 0;
}

// Input/Output

int main()
{
    int age;
    printf("enter your age:");
    scanf("%d", &age);
    printf("age is : %d", age);

    return 0;
}

// Sum Program
int main()
{
    int a;
    printf("enter a: ");
    scanf("%d", &a);

    int b;
    printf("enter b: ");
    scanf("%d", &b);

    // int sum = a + b;
    // printf("sum is: %d",sum);

    printf("sum is: %d",a + b);

    return 0;
}

// Area of a Square Program

int main()
{
   float side;
   printf("enter your side: ");
   scanf("%f",&side);

   printf("area of square: %f",side * side);
   return 0;

}


// Area of a Circle Program

int main()
{
   float pi = 3.14;

   float radius;
   printf("enter your radius: ");
   scanf("%f", &radius);

   printf("area of circle: %f", pi * radius * radius);
   return 0;

}