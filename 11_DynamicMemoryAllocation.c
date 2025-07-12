#include <stdio.h>
#include <stdlib.h> // make capable of DMA
// Dynamic Memory Allocation

// It is a way to allocate memory to a data structure during the runtime

// We need some functions to allocate and free memory dynamically

// Function for DMA

// malloc() (memory allocation)
// takes  number of bytes to be allocated and returns a pointer of type void
// ptr = (int*) malloc(5 * sizeof(int));

// int main(){
//     int *ptr; //int pointer
//     ptr = (int*) malloc(5 * sizeof(int)); // typecasting using  (int*)

//     ptr[0] = 1;
//     ptr[1] = 3;
//     ptr[2] = 5;
//     ptr[3] = 7;
//     ptr[4] = 9;

//     for(int i=0 ;i<5;i++){
//         printf("%d \n",ptr[i]);
//     }

//     return 0;

// }

// calloc (continous allocation)

// intializes with 0 (every value will intialize with 0)
// ptr = (*int) calloc(5, sizeof(int)); // 5 -> no of locations , sizeof(int) ->per location

// int main(){
//     int *ptr; //int pointer
//     ptr = (int*) calloc(5, sizeof(int)); // typecasting using  (int*)

//     for(int i=0 ;i<5;i++){
//         printf("%d \n",ptr[i]);
//     }

//     return 0;

// }

// Q - Write a program to allocate memory of size of n, where n is entered by the user

// int main()
// {
//     printf("Enter a number: ");
//     int n;
//     scanf("%d", &n);
//     int *ptr;
//     // ptr = (int*) malloc(n * sizeof(int));
//      ptr = (int*) calloc(n, sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \n", ptr[i]);
//     }
// }

// free()
// We use it to free memory that is allocated using malloc and calloc
// free(ptr);

// Q - Free the memory allocated with calloc

// int main()
// {
//     printf("Enter a number: ");
//     int n;
//     scanf("%d", &n);
//     int *ptr;
//     // ptr = (int*) malloc(n * sizeof(int));
//     ptr = (int *)calloc(n, sizeof(int));

//     for (int i = 0; i < n; i++)
//     {
//         printf("%d \n", ptr[i]);
//     }

//     free(ptr);

//     ptr = (int *)calloc(n, sizeof(int));

//     for (int i = 0; i < 2; i++)
//     {
//         printf("%d \n", ptr[i]);
//     }
// }

// realloc() (reallocation)
// reallocate (increase or decrease) memory using the same pointer and size

// ptr = realloc(ptr, newSize);

// Q - Allocate memory for 5 numbers.Then dynamically increase it to 8 numbers

// int main()
// {
//     int *ptr;
//     ptr = (int *)calloc(5, sizeof(5));

//     printf("Enter numbers(5): ");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }

//     ptr = realloc(ptr, 8);
//     printf("Enter numbers: ");
//     for (int i = 0; i < 8; i++)
//     {
//         scanf("%d", &ptr[i]);
//     }

//     for (int i = 0; i < 8; i++)
//     {
//         printf("number %d: %d \n", i, ptr[i]);
//     }
// }

// Q - Create an array of size 5(using calloc) and enter its values from user

// int main(){
//     int *ptr;
//     ptr = (int*) calloc(5, sizeof(int));

//     printf("Enter values: ");
//     for(int i = 0 ; i < 5; i++){
//         scanf("%d",&ptr[i]);
//     }

//     //print
//     for(int i = 0; i < 5; i++){
//         printf("Number %d : %d \n",i,ptr[i]);
//     }
// }

// Q - Allocate memory to store first 5 odd numbers,then reallocate to store first 6 even number

int main()
{
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    printf("Enter 5 odd numbers: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ptr[i]);
    }

    // print
    for (int i = 0; i < 5; i++)
    {
        printf("Odd Number %d = %d \n", i, ptr[i]);
    }

    ptr = realloc(ptr, 6);
    printf("Enter 6 even numbers: ");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &ptr[i]);
    }

    for (int i = 0; i < 6; i++)
    {
        printf("Even Number %d = %d \n", i, ptr[i]);
    }
}