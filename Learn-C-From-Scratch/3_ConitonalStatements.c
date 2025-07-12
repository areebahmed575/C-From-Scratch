# include<stdio.h>

// int main(){
//     int marks;
//     printf("Enter your marks:");
//     scanf("%d",&marks);
//     if(marks <= 30){
//          printf("Fail");
//     }
//     else if(marks  > 30 && marks <= 100){
//         printf("Pass");
//     }
//     else{
//         printf("Wrong marks");
//     }
// }

// int main(){
//     int marks;
//     printf("Enter your marks:");
//     scanf("%d",&marks);
//     marks > 30 ? printf("Pass") : printf("Fail");
// }



//Question: What will the following code do?

// int x = 2;

// if (x = 1) {
//     printf("x is equal to 1");
// } else {
//     printf("x is not equal to 1");
// }

// a. give error
// b. print "x is equal to 1"
// c. print "x is not equal to 1"



// Write a program to find if a character entered by user is upper case or not


int main(){

    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z'){
        printf("Upper case \n");

    }
    else if(ch >= 'a' && ch <= 'z'){
        printf("Lower case \n");
    }
    else{
        printf("Not a English letter \n");
    }
    return 0;

}