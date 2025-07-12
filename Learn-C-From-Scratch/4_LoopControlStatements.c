#include <stdio.h>

// int main(){
//     for(int i=0;i <= 10;i++){
//         printf("Hello world %d \n",i);
//     }
//     return 0;
// }

// increment operator

// i++ (post increment operator)
// ++i (pre increment operator)

// int main(){

//     int i = 1;

//     // printf("%d \n",i++); //i++ means use then increase
//     // printf("%d \n",i);

//     printf("%d \n",++i); //++i means increase then use
//     printf("%d \n",i);

//     return 0;
// }

// Print the sum of first n natural number and also print them in reverse

// int main(){
//     int n;
//     printf("Enter a number:");

//     scanf("%d",&n);

//     int sum = 0;
//     for(int i = 1;i <= n;i++){
//         sum = sum + i;
//     }
//     printf("Sum : %d \n",sum);

//     for(int i = n;i >= 1;i--){
//         printf("%d \n",i);

//     }

//     return 0;

// }

// We can also do above question using one loop

// int main(){
//     int n;
//     printf("Enter a number:");

//     scanf("%d",&n);

//     int sum = 0;
//     for(int i = 1, j = n; i <= n && j >= 1 ; i++ , j--){
//         sum = sum + i;
//         printf("%d \n",j);
//     }
//     printf("Sum : %d \n",sum);

//     return 0;

// }

// And we can also do this

// int main(){
//     int n;
//     printf("Enter a number:");

//     scanf("%d",&n);

//     int sum = 0;
//     for(int j = n; j >= 1 ; j--){
//         sum = sum + j;
//         printf("%d \n",j);
//     }
//     printf("Sum : %d \n",sum);

//     return 0;

// }

// break statement -- > exit the loop

// int main()
// {
//     int n;
//     do
//     {
//         printf("Enter a number: ");
//         scanf("%d", &n);
//         printf("You entered: %d \n", n);

//         if (n % 2 != 0){
//             break;
//         }
//     } while (1);
//     printf("You entered a odd number!!");

//     return 0;

    
// }


// continue statement -- > skip to next iteration


//Print all odd number from 5 to 50
// int main(){
   
//     for(int i = 5;i <= 50;i++){
//         if(i % 2 == 0){
//             continue;
//         }
//         printf("%d \n",i);
//     }
   

//     return 0;

// }


//Print the factorial of number n

// int main(){
    
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
    
//     int factorial = 1;
//     for(int i = 1;i <= n;i++){
//         factorial = factorial * i;
        
//     }
//     printf("Factorial: %d \n",factorial);
   

//     return 0;

// }




#include <stdio.h>

int main(void) {
    int rows = 4;
    int cols = 5;
    for (int i = 0; i < rows; i++) {       // outer loop for each row
        for (int j = 0; j < cols; j++) {   // inner loop for each column
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
