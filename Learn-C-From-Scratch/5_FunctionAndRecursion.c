#include <stdio.h>

// //declaration/prototype
// void printHello();
// void printGoodBye();

// int main(){
//     printHello(); //function call
//     printGoodBye();
//     return 0;
// }

// //function defination
// void printHello() {
//     printf("Hello! \n");
// }

// void printGoodBye() {
//     printf("Good Bye! \n");
// }

// Question
//  void printSalam();
//  void printBonjour();

// int main()
// {
//     printf("enter p for Pakistani or enter f for French:");
//     char ch;
//     scanf("%c", &ch);

//     if (ch == 'p')
//     {
//         printSalam();
//     }
//     else
//     {
//         printBonjour();
//     }

//     return 0;
// }

// void printSalam()
// {
//     printf("Salam! \n");
// }

// void printBonjour()
// {
//     printf("Bonjour! \n");
// }

// Print table function

// void printtable(int n);

// int main()
// {
//     printf("enter number:");
//     int n;
//     scanf("%d", &n);
//     printtable(n);

//     return 0;
// }

// void printtable(int n){
//     for(int i=1; i <= 10 ; i++){
//         printf("%d \n",n * i);
//     }

// }

// void printHelloWorld(int n);

// int main()
// {
//     printf("enter number:");
//     int n;
//     scanf("%d", &n);
//     printHelloWorld(n);

//     return 0;
// }

// void printHelloWorld(int n){
//     if(n == 0){
//         return;
//     }
//     printf("Hello world \n");
//     printHelloWorld(n-1);

// }



//Sum of first n natural number
// int sum(int n);

// int main()
// {
//     printf("enter number:");
//     int n;
//     scanf("%d", &n);
//     printf("Sum of first n natural number %d",sum(n));
//     return 0;
// }

// int sum(int n)
// {
//     if (n == 1) // Base condition
//     {
//         return 1;
//     }
//     int sumN = sum(n - 1);
//     int final = n + sumN;
//     return final;
// } 



// Sum of first n natural number
// int factorial(int n);

// int main()
// {
//     printf("enter number:");
//     int n;
//     scanf("%d", &n);
//     printf("Sum of first n natural number %d",factorial(n));
//     return 0;
// }

// int factorial(int n)
// {
//     if (n == 0) // Base condition
//     {
//         return 1;
//     }
//     int p = factorial(n - 1);
//     int f = n *  p;
//     return f;
// } 




//fibonacci
int fibonacci(int n);

int main()
{
    printf("enter number:");
    int n;
    scanf("%d", &n);
    printf("fibonacci of %d: %d",n,fibonacci(n));
    return 0;
}

int fibonacci(int n)
{
    if (n == 0) 
    {
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    int p =  fibonacci(n-1) + fibonacci(n-2);
    return p;
} 