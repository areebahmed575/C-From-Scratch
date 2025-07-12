#include <stdio.h>
#include <string.h>

// Strings

// A character array terminated by a '\0' (null character)
// null character denotes string termination

// int main()
// {
//     // char name[] = {'A','R','E','E','B','\0'}; //here we are using single quotes
//     char name[] = "AREEB"; //here we are using double quotes

//     // char name[] = "areeb ahmed";

//     return 0;
// }

// void printSring(char arr[]);

// int main(){
//     char firstName[] = "AREEB";
//     char lastName[] = "AHMED";
//     printSring(firstName);
//     printSring(lastName);

// }

// void printSring(char arr[]){
//     for(int i = 0;arr[i] != '\0' ;i++ ){
//         printf("%c",arr[i]);
//     }
//     printf("\t");

// }

// String Format Specifier

// int main(){
//     char name[40];
//     printf("enter your name:");
//     scanf("%s",name);

//     printf("your name is %s",name);
//     return 0;
// }

// Q - Ask the user to enter their firstName and print it back to them.
// Also try this with their fullName

// int main(){

//     char firstName[40];
//     printf("Enter your full name:");
//     scanf("%s",firstName); //Here I am unable to print my full name

//     printf("your full name is: %s ",firstName);

// }

// Important
// scanf() cannot input multi words strings with spaces

// Here,
// gets and puts comes in the picture

// String Function

// gets(str) --> input a string even a multiword --> Dangerous/Outdated
// fgets(str, n, file) --> input a string even a multiword.Stops when n-1 character input or new line is entered
// puts(str) --> outputs a string

// int main(){

//     char str[100];
//     printf("enter your full name:");
//     // gets(str);
//     fgets(str, 100,stdin); // stdin -- > standard input
//     puts(str);

//     return 0;
// }

// Strings using pointers

// char *str = "Hello World"
// Store string in memory and assigned address is stored in the char pointer 'str'

// char *str = "Hello World"; // can be reinitialized

// char str[] = "Hello World"; // can be not reinitialized

// int main()
// {

//     char *str = "Hello World"; // can be reinitialized
//     char *canChange = "Hello world";
//     puts(canChange);
//     canChange = "Hello";
//     puts(canChange);

//     char str[] = "Hello World"; // can be not reinitialized

//     char canChange[] = "Hello world";
//     puts(canChange);
//     canChange = "Hello";
//     puts(canChange);

// }

// Q - Enter a program that input user's name and print it's length

// void countLength(char name[]);

// int main()
// {

//     char name[40];
//     printf("Enter your name: ");
//     fgets(name, 100, stdin);
//     countLength(name);
// }

// void countLength(char name[])
// {
//     int count = 0;
//     for (int i = 0; name[i] != '\0'; i++)
//     {
//         count++;
//     }
//     printf("Name's Length %d", count - 1);

// }

// Using standard library function --> <string.h>

// 1 -strlen(str) - count number of characters excluding '\0'

// int main()
// {

//     char name[] = "areeb";
//     int length = strlen(name);
//     printf("Name's length: %d",length);

//     return 0;

// }

// 2- strcpy(newStr, oldStr) - copies value of old string to new string

// int main()
// {

//    char oldStr[] = "oldStr";
//    char newStr[] = "newStr";

//    strcpy(newStr, oldStr);
//    puts(newStr);

// }

// 3- strcat(firstStr, secondStr) - copies value of old string to new string

// int main()
// {

//    char firstStr[100] = "Hello ";
//    char secondStr[] = "World";

//    strcat(firstStr, secondStr);
//    puts(firstStr);

// }

// 3- strcmp(firstStr, secondStr) - compares 2 strings and returns a value

// int main()
// {
//     // returns 0 if string equal
//     // char firstStr[] = "Hello";
//     // char secondStr[] = "Hello";
//     // printf("%d", strcmp(firstStr, secondStr));

//     // returns positive it first > second (ASCII)
//     // char firstStr[] = "Banana";
//     // char secondStr[] = "Apple";
//     // printf("%d", strcmp(firstStr, secondStr));

//     // returns negative it second > first (ASCII)
//     // char firstStr[] = "Apple";
//     // char secondStr[] = "Banana";
//     // printf("%d", strcmp(firstStr, secondStr));
// }

// Q - Taking a string input from the user using %c

// int main()
// {
//     char ch;
//     char input[100];
//     int i = 0;
//     while (ch != '\n')
//     {
//         scanf("%c", &ch);
//         input[i] = ch;
//         i++;
//     }
//     input[i] = '\0';
//     puts(input);

//     return 0;
// }

// void inputFromUser(char input[]);

// int main()
// {
//     char input[100];

//     inputFromUser(input);
// }

// void inputFromUser(char input[])
// {
//     char ch;
//     int i = 0;
//     while (ch != '\n')
//     {
//         scanf("%c", &ch);
//         input[i] = ch;
//         i++;
//     }
//     input[i] = '\0';
//     puts(input);
// }

// Q - Find the salted form of a password entered by the user if the salt is "123" and added at the end

// void salting(char password[]);

// int main()
// {
//    char password[100];
//    scanf("%s",password);

//    salting(password);

// }

// void salting(char password[]){
//     char salt[] = "123";

//     char newPass[200];

//     strcpy(newPass,password);

//     strcat(password,salt);

//     puts(password);

// }

// Q - Write a function named slice,which takes a string and returns a sliced string from index n to m

// void slice(char string[], int n, int m);

// int main(){
//     char string[] = "HelloWorld";
//     slice(string,3,6);

// }

// void slice(char string[], int n, int m){
//     char newStr[100];
//     int j = 0;
//     for(int i = n ; i <= m ; i++ , j++){
//         newStr[j] = string[i];

//     }
//     newStr[j] = '\0';
//     puts(newStr);

// }

// Q - Write a function to count the occurrence of vowels in a string

// int occurrenceVowels(char str[]);

// int main()
// {
//     char str[] = "helloworld";
//     printf("vowels are : %d", occurrenceVowels(str));
// }

// int occurrenceVowels(char str[])
// {
//     int count = 0;
//     for (int i = 0; i < str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             count++;
//         }
//     }
//     return count;
// }




// Q - Write a function to count the occurrence of consonant  in a string

// int occurrenceConsonant (char str[]);

// int main()
// {
//     char str[] = "helloworld";
//     printf("consonant are : %d", occurrenceConsonant(str));
// }

// int occurrenceConsonant(char str[])
// {
//     int count = 0;
//     for (int i = 0; i < str[i] != '\0'; i++)
//     {
//         if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
//         {
//             count++;
//         }
//     }
//     return strlen(str) - count;
// }


// Q - Check if a given character is present in a string or not

void presentString(char str[],char ch);

int main(){
    char str[100] = "HelloWorld";
    char ch = 'e' ;
    presentString(str,ch);
  
}

void presentString(char str[],char ch){
    for(int i = 0;i < str[i] != '\0'; i++){
        if(str[i] == ch){
            printf("character is Present");
            return;
        }

    }  
    printf("character is not Present");
}

