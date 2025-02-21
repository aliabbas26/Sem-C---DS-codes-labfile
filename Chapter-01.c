#include<stdio.h>
//Chapter 01: Variables, Data types and Input/Output

// Single line comment
/* Multiple line comments 
Bla 
bla 
not overthinkinggg*/

int main(){
    // int age=22; 
    // float pi=3.14;
    // int _first ='a'; // variables can only start with a alphabets or underscore(_)
    // int second='A'; // case sensitives
    // int total_profit=2.5L;

    printf("Hello World"); //printf is output function
    printf("Hello World\n"); // \n is to add new line.
    printf("Hello World\n");

    // printf("Age is:%d \n", age); // %d for integers
    // printf("Value of pi is:%f \n", pi); // %f for real numbers
    // printf("First alphabet is:%c\n", _first); // %c for characters

    // scanf("%d", &age) Output function usually assigned the entered values to variables
    

    //Practice Q1
    // float side;
    // printf("Enter the side of a square:");
    // scanf("%f", &side);
    // printf("The area of square is: %f", side*side);

    //Practice Q2
    // float radius;
    // printf("Enter the radius of the circle:");
    // scanf("%f",&radius);
    // printf("The area of the circle is:%f",3.14*radius*radius);

    //extras: use ctrl+/(single) to comment/uncomment selected lines of code.
    return 0;
}