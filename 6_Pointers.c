#include <stdio.h>

// Pointers
// A variable that stores the memory address of another variable

/*
   Memory:

       age                    ptr
    ┌─────┐ ┌─────┐ ┌─────┐ ┌─────┐
    │  22 │ │     │ │     │ │ 2010│
    └─────┘ └─────┘ └─────┘ └─────┘
      ↑                         ↑
   address 2010           address 2013
   int age = 22;
*/

// int main(){
//     int age = 22;
//     int *ptr = &age; // * -- > value at address   & -->  address of
//     int _age = *ptr;
//     printf("%d",_age);
//     return 0;

// }

/*
   Memory:

      age   _age               ptr
    ┌─────┐ ┌─────┐ ┌─────┐ ┌─────┐
    │  22 │ │22   │ │     │ │ 2010│
    └─────┘ └─────┘ └─────┘ └─────┘
      2010   2011             2013

*/

// Declaring pointers

// int *ptr; // int age=22;
// char *ptr; // char star='*';
// float *ptr; // float price=1.000;

// Format specifier
//  Getting Address
//  int main()
//  {
//      int age = 22;
//      int *ptr = &age;

//     // adress
//     printf("%p \n", &age); // it will give adress in hexadecimal
//     printf("%u \n", &age); // unsinged int will give in better format

//     printf("%u \n", ptr);

//     printf("%u \n", &ptr);

//     return 0;
// }

// Getting value
// int main()
// {
//     int age = 22;
//     int *ptr = &age;

//     // value
//     printf("%d \n",age);

//     printf("%d \n",*ptr);

//     printf("%d \n",*(&age));

//     return 0;
// }

// int main() {
//     int *ptr;
//     int x;

//     ptr = &x;
//     *ptr = 0;

//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     *ptr += 5;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     (*ptr)++;
//     printf("x = %d\n", x);
//     printf("*ptr = %d\n", *ptr);

//     return 0;
// }

/*
   Memory:

       x                      ptr
    ┌─────┐ ┌─────┐ ┌─────┐ ┌─────┐
    │   0 │ │     │ │     │ │ 2010│
    └─────┘ └─────┘ └─────┘ └─────┘
      ↑
   address 2010

*/

// Pointer to Pointer

// Syntax
//  int **ptr;
//  char **ptr;
//  float **ptr;

// int main(){
//    float price = 100.000;
//    float *ptr = &price;
//    float **pptr = &ptr;
// }

// Q:Print the value of i from it's pointer to pointer

// int main(){
//    int i = 5;
//    int *ptr = &i;
//    int **pptr = &ptr;
//    printf("value of i from it's pointer to pointer %d:",**pptr);
// }

/*
   Memory:

      i      *ptr            **pptr
    ┌─────┐ ┌─────┐ ┌─────┐ ┌─────┐
    │   5 │ │201  │ │     │ │ 202 │
    └─────┘ └─────┘ └─────┘ └─────┘
      201    202             203

*/

// Pointers in function call

// Call by value --> We pass value of variable as argument.A copy of variable is created with different address
//  void square(int n);
// Call by reference --> We pass address of variable as argument.
//  void _square(int *n);

// int main(){
//    int number = 4;

//    square(number); //Call by value
//    printf("number: %d \n",number);

//    _square(&number); //Call by reference
//    printf("number: %d \n",number);

// }

// void square(int n){
//    n = n * n;
//    printf("Square: %d \n",n);

// }

// void _square(int *n){
//    *n = (*n) * (*n);
//    printf("Square: %d \n",*n);

// }

// Q:Swap two numbers a and b

// Call by value

// void swap(int a,int b);

// int main(){
//    int x = 5 ;
//    int y = 3;
//    swap(x,y);
//    printf("value of x %d and value of y %d \n",x,y);

// }

// void swap(int a,int b){
//    int t = a;
//    a = b;
//    b = t ;
//    printf("value of a %d and value of b %d \n",a,b);
// }

// Call by reference

// void swap(int *a,int *b);

// int main(){
//    int x = 5 ;
//    int y = 3;
//    swap(&x,&y);
//    printf("value of x %d and value of y %d \n",x,y);

// }

// void swap(int *a,int *b){
//    int t = *a;
//    *a = *b;
//    *b = t ;
//    printf("value of a %d and value of b %d \n",*a,*b);
// }

// Q:Will the address output be same?

// void printAddress(int n);

// int main(){
//    int n = 4;

//    printf("%p\n", &n);
//    printAddress(n);

//    return 0;

// }

// void printAddress(int n) {  // Call by value so address output will not be same
//    printf("%p\n", &n);
// }

// void printAddress(int *n);

// int main(){
//    int n = 4;

//    printf("%p\n", &n);
//    printAddress(&n);

//    return 0;

// }

// void printAddress(int *n) {  // Call by reference so address output will  be same
//    printf("%p\n", &(*n));
// }

// Q:Write a function to calculate the sum,product and average of 2 numbers.Print that sum,product and average in that main function

// void calc(int a, int b, int *sum, int *product, int *avg);

// int main()
// {
//    int a = 4;
//    int b = 5;
//    int sum, product, avg;
//    calc(a, b, &sum, &product, &avg);
//    printf("sum = %d, product =  %d, avg =  %d \n", sum,product,avg);
// }

// void calc(int a, int b, int *sum, int *product, int *avg)
// {
//    *sum = a + b;
//    *product = a * b;
//    *avg = (a + b) / 2; // here we can only return a single value.But using pointers(call by reference) we can return multiple values
// }


