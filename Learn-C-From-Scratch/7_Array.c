// Array - Collection of similar datatypes stored at contiguous memory locations
#include <stdio.h>

// int main()
// {
//     int marks[3];

//     printf("Enter marks of chem:");
//     scanf("%d",&marks[0]);

//     printf("Enter marks of phy:");
//     scanf("%d",&marks[1]);

//     printf("Enter marks of maths:");
//     scanf("%d",&marks[2]);

//     printf("Marks of chem %d,Marks of phy %d,Marks of maths %d",marks[0],marks[1],marks[2]);

//     return 0;

// }

// int main()
// {
//     float items[3];

//     printf("Enter 3  price of 1st item:");
//     scanf("%f",&items[0]);
//     scanf("%f",&items[1]);
//     scanf("%f",&items[2]);

//     printf("total price 1 %f \n",items[0] + (items[0]*0.18));
//     printf("total price 2 %f \n",items[1] + (items[1]*0.18));
//     printf("total price 3 %f \n",items[2] + (items[2]*0.18));

//     return 0;

// }

// Initialization of Array

// int main()
// {
//     float items[3] = {100.00,99.00,89.22};
//     // float items[] = {100.00,99.00,89.22};

//     printf("%f",items[2]);
//     return 0;

// }

// Pointer Arithmetic
// Pointer can be incremented and decremented

// Int
//  int main()
//  {
//      int age = 22;
//      int *ptr = &age;
//      printf("ptr = %u \n", ptr);

//     ptr++; // 1 int = 4 bytes --> it will increment four bytes in ptr
//     printf("ptr = %u \n", ptr);

//     ptr++; // 1 int = 4 bytes --> it will decrement four bytes in ptr
//     printf("ptr = %u \n", ptr);

//     return 0;
// }

// float
//  int main()
//  {
//      float age = 22.09;
//      float *ptr = &age;
//      printf("ptr = %u \n", ptr);

//     ptr++; // 1 float = 4 bytes --> it will increment four bytes in ptr
//     printf("ptr = %u \n", ptr);

//     ptr--; // 1 float = 4 bytes --> it will decrement four bytes in ptr
//     printf("ptr = %u \n", ptr);

//     return 0;
// }

// char
//  int main()
//  {
//      char star = '*';
//      char *ptr = &star;
//      printf("ptr = %u \n", ptr);

//     ptr++; // 1 char = 1 bytes --> it will increment one byte in ptr
//     printf("ptr = %u \n", ptr);

//     ptr--; // 1 char = 1 bytes --> it will decrement one byte in ptr
//     printf("ptr = %u \n", ptr);

//     return 0;
// }

// We can also subtract one pointer to another

// We can also compare two pointers

// int main(){
//     int age = 22;
//     int *ptr = &age;

//     int _age = 22;
//     int *_ptr = &_age;

//     printf("%u, %u difference =  %u \n",ptr, _ptr, ptr - _ptr); // 6422292 - 6422288 = 4.It will give 1 because 1 byte = 4

//     _ptr =  &age;
//     printf("ptr = _ptr %u",ptr == _ptr);
// }

// Array is a pointer

// Below both statements are same
// int *ptr = &arr[0];

// int *ptr = arr;

// Traverse of an Array

// int main()
// {
//     int rollNo[5];
//     int *ptr = &rollNo[0];

//     //input
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index: ", i);
//         scanf("%d", ptr + i);
//     }

//     //output
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index= %d\n", i, *(ptr + i));

//     }
// }

// Second way

// int main()
// {
//     int rollNo[5];
//     int *ptr = &rollNo[0];

//     //input
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index: ", i);
//         scanf("%d", &rollNo[i]);
//     }

//     //output
//     for (int i = 0; i < 5; i++)
//     {
//         printf("%d index= %d\n", i, *(&rollNo[i]));

//     }
// }

// Array as a function argument

// Function declaration
//  void printNumbers(int arr[],int n); //int n is size

// void printNumbers(int *arr,int n);

// //Function call
// printNumbers(arr,n);
// printNumbers(&arr[0],n);

// void printNumbers(int arr[],int n);

// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printNumbers(arr,6);

//     return 0;

// }

// void printNumbers(int arr[],int n){
//     for(int i = 0; i < n; i ++){
//         printf("%d \t",arr[i]);
//     }
// }

// void printNumbers(int *arr,int n);

// int main(){
//     int arr[] = {1,2,3,4,5,6};
//     printNumbers(&arr[0],6);

//     return 0;

// }

// void printNumbers(int *arr,int n){
//     for(int i = 0; i < n; i ++){
//         printf("%d \t",arr[i]);
//     }
// }

// Multidimensional Array
// 2D Array

// Declare
//  int arr[][] = {{1,2},{3,4}};

// Access

// arr[0][0] // 1
// arr[0][1] // 2
// arr[1][0] // 3
// arr[1][1] // 4

// int main()
// {
//     int marks[2][3]; // _ _ _ | _ _ _

//     marks[0][0] = 90;
//     marks[0][1] = 80;
//     marks[0][2] = 70;

//     marks[1][0] = 90;
//     marks[1][1] = 80;
//     marks[1][2] = 70;

// }

// Q - Write a function to count the numbers of odd numbers in an array

// int countOddNumbers(int arr[],int n);

// int main(){
//     int arr[] = {1,2,3,4,5};
//     countOddNumbers(arr,5);
//     printf("Number of odd numbers: %d",countOddNumbers(arr,5));

// }

// int countOddNumbers(int arr[],int n){
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] % 2 != 0){
//             count += 1;
//         }
//     }
//     return count;

// }

// int countOddNumbers(int *arr,int n);

// int main(){
//     int arr[] = {1,2,3,4,5};
//     countOddNumbers(&arr,5);
//     printf("Number of odd numbers: %d",countOddNumbers(arr,5));

// }

// int countOddNumbers(int *arr,int n){
//     int count = 0;
//     for(int i = 0; i < n; i++){
//         if(arr[i] % 2 != 0){
//             count += 1;
//         }
//     }
//     return count;

// }

// int main(){

//     int arr[] = {1,2,3,4,5};
//     printf("%d \n",*(arr+2));
//     printf("%d \n",*(arr+5));

// }

// Q - Write a function to reverse an array

// In this question,we can see that array is a pointer and it is using "call by reference" here

// void reverseAnArray(int arr[],int n);
// void printArray(int arr[],int n);

// int main(){
//     int arr[] = {1,2,3,4,5};
//     reverseAnArray(arr,5);
//     printArray(arr,5);

// }

// void printArray(int arr[],int n){
//     for(int i = 0; i < n; i++){
//         printf("%d \t",arr[i]);
//     }

// }

// void reverseAnArray(int arr[],int n){
//     for(int i = 0; i < n/2 ; i++){
//         int firstValue = arr[i];
//         int lastValue = arr[n-i-1];
//         arr[i] = lastValue;
//         arr[n-i-1] = firstValue;
//     }

// }

// Q - Write a program to store the first n fibonacci numbers

// int main()
// {
//     int n;
//     printf("Enter number:");
//     scanf("%d", &n);
//     int fib[n];
//     fib[0] = 0;
//     fib[1] = 1;

//     for (int i = 2; i < n; i++)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//         printf("%d \t", fib[i]);
//     }
//     printf("\n");

//     return 0;
// }

// void fibonacci(int fib[], int n);

// int main()
// {
//     int n;
//     printf("Enter how many Fibonacci terms to print: ");
//     if (scanf("%d", &n) != 1)
//     {
//         printf("Invalid input.\n");
//         return 1; // failed
//     }

//     int fib[n];
//     fibonacci(fib, n);

//     return 0; // sucess
// }

// void fibonacci(int fib[], int n){
//     if (n <= 0)
//     {
//         printf("Nothing to print for n = %d\n", n);
//         return;
//     }

//     fib[0] = 0;
//     printf("%d ", fib[0]);

//     if (n == 1)
//     {
//         printf("\n");
//         return;
//     }

//     fib[1] = 1;
//     printf("%d ", fib[1]);

//     for (int i = 2; i < n; i++)
//     {
//         fib[i] = fib[i - 1] + fib[i - 2];
//         printf("%d ", fib[i]);
//     }
//     printf("\n");
// }


// Q - Create a 2D array,storing the tables oof 2 and 3

// void storeTable(int arr[][10], int n, int m, int number);

// int main()
// {
//     int table[2][10];
//     storeTable(table, 0, 10, 2); // n -- > row // m -- > column
//     storeTable(table, 1, 10, 3);

//     for (int i = 0; i < 10; i++)
//     {
//        printf("%d\t",table[0][i]);  // 0 index
//     }

//     printf("\n");

//     for (int i = 0; i < 10; i++)
//     {
//        printf("%d\t",table[1][i]); // 1 index
//     }
    

//     return 0;
// }

// void storeTable(int arr[][10], int n, int m, int number)
// {

//     for (int i = 0; i < m; i++)
//     {
//         arr[n][i] = number * (i+1);
//     }
// }



   