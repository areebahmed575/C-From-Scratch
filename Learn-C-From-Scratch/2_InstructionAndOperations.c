#include <stdio.h>
#include <math.h>


// int main()
// { 
//     int a = 2;
//     int b = 2;
//     int power = pow(a,b);
//     printf("%d", power);
//     return 0;
// }


// int main()
// { 
//     printf("%d \n",5 % 2);
//      printf("%d \n",-5 % 2);
//     // printf("%d \n",1.6 % 4.1); // modular only work for integer
//     return 0;
// }


// Type Conversion

// int op int --> int
// int op float --> flaot
// float op float --> flaot

// int main()
// { 
//     int a = 1.999999; // throw an error because can't convert bigger value(double) into smaller (int)
//     printf("%d \n",a);

//     return 0;
// }

// int main()
// { 
//     int a = (int) 1.999999; // it will forcefully convert bigger value(double) into smaller (int)
//     printf("%d \n",a); // it will print 1

//     return 0;
// }


// Arithmetic Instruction

// Operator Precedence
// *,/,%  -->  +,-  -->  =

// Assciativity (for same precedence)

// x = 4*3 / 6*2 --> Left to Right (for same Precedence it will follow left to right rule)



//Program to check if number is divisible by 2 or not


// int main(){
//     int number;
//     printf("Enter your number:");
//     scanf("%d",&number);
//     printf("%d",number % 2 == 0);
//     return 0;

// }


//Program to  Print the smallest of three numbers

// int  main(){

//     int a,b,c,m;

//     printf("Enter three numbers:");
//     scanf("%d %d %d",&a,&b,&c);

//     m = a < b ? a : b;
//     m = m < c ? m : c;
//     printf("%d",m);
//     return 0;

// }