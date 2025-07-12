#include <stdio.h>
#include <string.h>
// Structures - a collection of values of different data types

// user-defined datatype
//  struct student
//  {
//      int roll;
//      float cgpa;
//      char  name[100];
//  };

// int main(){
//     struct student s1;
//     s1.roll = 1164;
//     s1.cgpa = 3.2;
//     // s1.name = "areeb"; // we can't change array notation string.So this syntax is incorrect
//     strcpy(s1.name,"areeb");

//     printf("student name = %s \n",s1.name);
//     printf("student roll no = %d \n",s1.roll);
//     printf("student cgpa = %f \n",s1.cgpa);

//     return 0;
// }

// Array of Structures

// struct student
// {
//     int roll;
//     float cgpa;
//     char  name[100];
// };

// int main(){
//     struct student cs[100];
//     cs[0].roll = 1164;
//     cs[0].cgpa = 3.2;
//     strcpy(cs[0].name,"areeb");

//     printf("student name = %s \n",cs[0].name);
//     printf("student roll no = %d \n",cs[0].roll);
//     printf("student cgpa = %f \n",cs[0].cgpa);

//     struct student me[100];
//     me[0].roll = 1165;
//     me[0].cgpa = 3.3;
//     strcpy(me[0].name,"ali");

//     printf("student name = %s \n",me[0].name);
//     printf("student roll no = %d \n",me[0].roll);
//     printf("student cgpa = %f \n",me[0].cgpa);

//     return 0;
// }

// Intializing Sructures

// struct student
// {
//     int roll;
//     float cgpa;
//     char  name[100];
// };

// int main(){
//     struct student s1 = {1162,3.2,"areeb"}; //Single line intializing

//     printf("student name = %s \n",s1.name);
//     printf("student roll no = %d \n",s1.roll);
//     printf("student cgpa = %f \n",s1.cgpa);

//     return 0;
// }

// Pointer to Structures
// struct student
// {
//     int roll;
//     float cgpa;
//     char  name[100];
// };

// int main(){
//     struct student s1 = {1162,3.2,"areeb"};

//     struct student *ptr = &s1;
//     printf("Student roll no = %d \n",(*ptr).roll);

//     return 0;
// }

// Arrow Operator

// (*ptr).roll ---> ptr->roll
// struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// int main()
// {
//     struct student s1 = {1162, 3.2, "areeb"};

//     struct student *ptr = &s1;
//     printf("Student roll no = %d \n", ptr->roll);
//     printf("Student cgpa = %f \n", ptr->cgpa);
//     printf("Student name = %s \n",ptr->name);

//     return 0;
// }

// Passing structure to function

// struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// void printInfo(struct student s1);

// int main(){

//     struct student s1 = {1162,3.2,"areeb"};
//     printInfo(s1); // Structure is a call by value

// }

// void printInfo(struct student s1){

//     printf("Student roll no = %d \n", s1.roll);
//     printf("Student cgpa = %f \n", s1.cgpa);
//     printf("Student name = %s \n", s1.name);

// }

// typedef Keyword - used to create alias for datatypes(alias means nickname)

// typedef struct student
// {
//     int roll;
//     float cgpa;
//     char name[100];
// } stu;

// typedef struct computerEngineeringStudent
// {
//     int roll;
//     float cgpa;
//     char name[100];
// } coe;

// int main()
// {
//     // struct student s1 = {1162,3.2,"areeb"};
//     stu s1 = {1162, 3.2, "areeb"};
//     printf("Student roll no = %d \n", s1.roll);
//     printf("Student cgpa = %f \n", s1.cgpa);
//     printf("Student name = %s \n", s1.name);

//     coe c1;
//     c1.roll = 1163;
//     c1.cgpa = 3.3;
//     strcpy(c1.name,"ali");

//     printf("Student roll no = %d \n", c1.roll);
//     printf("Student cgpa = %f \n", c1.cgpa);
//     printf("Student name = %s \n", c1.name);
// }

// Q - Enter address(house no,block,city,state) of 5 people

// struct address
// {
//     int houseNo;
//     int block;
//     char city[50];
//     char state[100];
// };

// void printInfo(struct address add);

// int main()
// {
//     struct address adds[5];

//     printf("Enter info for person 1:");

//     scanf("%d", &adds[0].houseNo);
//     scanf("%d", &adds[0].block);
//     scanf("%s", adds[0].city);
//     scanf("%s", adds[0].state);


//     // printf("Enter info for person 2:");
//     // scanf("%d", &adds[1].houseNo);
//     // scanf("%d", &adds[1].block);
//     // scanf("%s", adds[1].city);
//     // scanf("%s", adds[1].state);
     

//     // printf("Enter info for person 3:");
//     // scanf("%d", &adds[2].houseNo);
//     // scanf("%d", &adds[2].block);
//     // scanf("%s", adds[2].city);
//     // scanf("%s", adds[2].state);


//     // printf("Enter info for person 4:");
//     // scanf("%d", &adds[3].houseNo);
//     // scanf("%d", &adds[3].block);
//     // scanf("%s", adds[3].city);
//     // scanf("%s", adds[3].state);
 
//     // printf("Enter info for person 5:");
//     // scanf("%d", &adds[4].houseNo);
//     // scanf("%d", &adds[4].block);
//     // scanf("%s", adds[4].city);
//     // scanf("%s", adds[4].state);

//     printInfo(adds[0]);
//     // printInfo(adds[1]);
//     // printInfo(adds[2]);
//     // printInfo(adds[3]);
//     // printInfo(adds[4]);
// }

// void printInfo(struct address add)
// {
//     printf("address is: %d, %d, %s, %s", add.houseNo, add.block, add.city, add.state);
// }




// Using typedef


// typedef struct address
// {
//     int houseNo;
//     int block;
//     char city[50];
//     char state[100];
// } add;

// void printInfo(add adds);

// int main()
// {
//     add adds[5];

//     printf("Enter info for person 1:");

//     scanf("%d", &adds[0].houseNo);
//     scanf("%d", &adds[0].block);
//     scanf("%s", adds[0].city);
//     scanf("%s", adds[0].state);


//     printf("Enter info for person 2:");
//     // scanf("%d", &adds[1].houseNo);
//     // scanf("%d", &adds[1].block);
//     // scanf("%s", adds[1].city);
//     // scanf("%s", adds[1].state);
     

//     // printf("Enter info for person 3:");
//     // scanf("%d", &adds[2].houseNo);
//     // scanf("%d", &adds[2].block);
//     // scanf("%s", adds[2].city);
//     // scanf("%s", adds[2].state);


//     // printf("Enter info for person 4:");
//     // scanf("%d", &adds[3].houseNo);
//     // scanf("%d", &adds[3].block);
//     // scanf("%s", adds[3].city);
//     // scanf("%s", adds[3].state);
 
//     // printf("Enter info for person 5:");
//     // scanf("%d", &adds[4].houseNo);
//     // scanf("%d", &adds[4].block);
//     // scanf("%s", adds[4].city);
//     // scanf("%s", adds[4].state);

//     printInfo(adds[0]);
//     // printInfo(adds[1]);
//     // printInfo(adds[2]);
//     // printInfo(adds[3]);
//     // printInfo(adds[4]);
// }

// void printInfo(add adds)
// {
//     printf("address is: %d, %d, %s, %s", adds.houseNo, adds.block, adds.city, adds.state);
// }


// Q-Create a structure to store vectors.Then make a function to return the sum of two vectors


// struct vector
// {
//     int x;
//     int y;
// };

// void calc(struct vector v1,struct vector v2,struct vector sum );

// int main(){
//     struct vector v1 = {5,10};
//     struct vector v2 = {3,7};
//     struct vector sum = {0,0};

//     calc(v1,v2,sum);
// }


// void calc(struct vector v1,struct vector v2,struct vector sum ){
//     sum.x = v1.x + v2.x;
//     sum.y = v1.y + v2.y;

//     printf("Sum of x is %d \n",sum.x);
//     printf("Sum of y is %d",sum.y);
// }



// Q - Create a structure to store complex numbers.(use arrow operators)

struct complex
{
    int real;
    int img;
};

int main(){
    struct complex number1 = {5,8};
    struct complex *ptr = &number1;
    printf("real no %d \n",ptr->real);
    printf("img no %d",ptr->img);


    return 0;
}
