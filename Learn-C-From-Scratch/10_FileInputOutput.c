#include <stdio.h>

// File I/O

// File - container in a storage device to store data

// RAM is volatile

// Contents are lost when program terminates

// Files are used to persist the data

// Operation on File:

// Create a file - Open a file - Close a file - Read from a file - Write in a file

// Types of files

// Text files:
// textual data - .txt, .c

// Binary files:
// binary data - .mp3, .exe, .jpg

// File pointer:

// FILE is a (hidden) structure that needs to be created for opening a file.

// A FILE ptr that points to this structure and is used to acess the file

// FILE *fptr

// int main(){
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r"); // opening a file
//     fclose(fptr);  // closing a file

//     return 0;

// }

// File Opening  Modes

// "r" - open to read
// "rb" - open to read in binary
// if file does not exist then null will be store in pointer

// "w" - open to write
// "wb" - open to write in binary
// if file does not exist then it will create a file.If file exists then all data will be overwrite

// "a" - open to append
// If file exists then new data will be added after old data

// BEST PRACTICE
// Check if a file exist before reading from it.

// int main(){
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "r"); // opening a file
//     if(fptr == NULL){
//         printf("File does not exist \n");
//     }
//     else{
//           fclose(fptr);  // closing a file
//     }

//     return 0;

// }

// int main(){
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "w"); // opening a file
//     if(fptr == NULL){
//         printf("File does not exist \n");
//     }
//     else{
//           fclose(fptr);  // closing a file
//     }

//     return 0;

// }

// Reading from a file

// char ch;
// fscanf(fptr, "%c",&ch);

// int main(){
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r"); // opening a file

//     char ch;
//     fscanf(fptr, "%c", &ch);
//     printf("character = %c \n",ch);

//     fscanf(fptr, "%c", &ch);
//     printf("character = %c \n",ch);

//     fscanf(fptr, "%c", &ch);
//     printf("character = %c \n",ch);

//     fscanf(fptr, "%c", &ch);
//     printf("character = %c \n",ch);

//     fscanf(fptr, "%c", &ch);
//     printf("character = %c \n",ch);

//     fclose(fptr);

//     return 0;

// }

// int main(){
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "r"); // opening a file

//     int ch;
//     fscanf(fptr, "%d", &ch);
//     printf("character = %d \n",ch);

//     fscanf(fptr, "%d", &ch);
//     printf("character = %d \n",ch);

//     fscanf(fptr, "%d", &ch);
//     printf("character = %d \n",ch);

//     fclose(fptr);

//     return 0;

// }

// Writing to a file

// char ch = 'A';

// fprintf(fptr, "%c", ch);

// int main(){
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "w");

//     fprintf(fptr, "%c",'M');

//     fprintf(fptr, "%c",'A');

//     fprintf(fptr, "%c",'N');

//     fprintf(fptr, "%c",'G');

//     fprintf(fptr, "%c",'O');

//     fclose(fptr);

//     return 0;

// }

// Append to a file

// int main(){
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "a");

//     fprintf(fptr, "%c",'M');

//     fprintf(fptr, "%c",'A');

//     fprintf(fptr, "%c",'N');

//     fprintf(fptr, "%c",'G');

//     fprintf(fptr, "%c",'O');

//     fclose(fptr);

//     return 0;

// }

// Read and Write a char

// fgetc(fptr);

// fputc('A',fptr);

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");

//     printf("%c", fgetc(fptr));
//     printf("%c", fgetc(fptr));
//     printf("%c", fgetc(fptr));
//     printf("%c", fgetc(fptr));
//     printf("%c", fgetc(fptr));

//     fclose(fptr);

//     return 0;

// }

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("Test.txt", "w");

//     fputc('M', fptr);
//     fputc('A', fptr);
//     fputc('N', fptr);
//     fputc('G', fptr);
//     fputc('O', fptr);

//     fclose(fptr);

//     return 0;
// }

// EOF (End of File) - fgetc returns EOF(NULL) to show that the file has ended

// int main()
// {
//     FILE *fptr;
//     fptr = fopen("NewTest.txt", "r");

//     char ch;
//     ch = fgetc(fptr);
//     while (ch != EOF)
//     {
//         printf("%c", ch);
//         ch = fgetc(fptr);
//     }
//     printf("\n");

//     fclose(fptr);

//     return 0;
// }

// Q - Make a program to read 5 integers from a file

// int main(){
//     FILE *fptr;
//     fptr = fopen("Test.txt", "r");

//     int num;

//     fscanf(fptr, "%d", &num);
//     printf("number: %d \n",num);

//     fscanf(fptr, "%d", &num);
//     printf("number: %d \n",num);

//     fscanf(fptr, "%d", &num);
//     printf("number: %d \n",num);

//     fscanf(fptr, "%d", &num);
//     printf("number: %d \n",num);

//     fscanf(fptr, "%d", &num);
//     printf("number: %d \n",num);

//     fclose(fptr);
//     return 0;

// }

// Q - Make a program to input student information from user and enter it to a file.

// int main(){
//     FILE *fptr;
//     fptr = fopen("Student.txt", "w");

//     char name[100];
//     int age;
//     float cgpa;

//     printf("Enter your name:");
//     scanf("%s",name);

//     printf("Enter your age:");
//     scanf("%d",&age);

//     printf("Enter your cgpa:");
//     scanf("%f",&cgpa);

//     fprintf(fptr,"student : %s \n",name);
//     fprintf(fptr,"age :  %d \n",age);
//     fprintf(fptr,"cgpa : %f",cgpa);

//     fclose(fptr);

//     return 0;
// }

// Q - Write a program to write all odd numbers from 1 to n in a file

// int main(){
//     FILE *fptr;
//     fptr = fopen("Odd.txt", "w");

//     printf("Enter number: ");

//     int n;
//     scanf("%d", &n);

//     for(int i = 0;i <= n; i++){
//         if(i % 2 != 0){
//             fprintf(fptr, "%d \n", i);
//         }
//     }

//     fclose(fptr);
// }

// Q - 2 numbers - a and b,are written in  a file.Write a program to replace them with their sum

int main()
{
    FILE *fptr;
    fptr = fopen("Sum.txt", "r");

    int a;
    int b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);
    fclose(fptr);

    fptr = fopen("Sum.txt", "w");
    fprintf(fptr, "%d", a + b);
    fclose(fptr);


    return 0;

}