#include<stdio.h>
#include<math.h>

int main(){
    // Type Declration instruction
    // int a =22;
    // int b = a;
    // int c = b*6;
    // int d = 1, e;

    // int oldAge = 22;
    // int years = 3;
    // int newAge = oldAge + years;

    // int a, b, c;
    // a = b = c = 1;

    // // int x = y = z = 4; wrong coz y is not defined earlier.

    // Arithematic instructions
    // int b, c;
    // b = c = 1;
    // int a = b + c; //single variable written on LHS
    // int power = pow(b,c);
    // printf("%d", power);

    // % modular operator gives remainder for int.
    // printf("%d \n", 16%10);
    // printf("%d \n", -8%3);

    // int a = (int) 1.999999;
    // printf("%d \n", a);

    // Operator priority: * > / > % > + > - > =
    // For same precedence Associative rule: Left to right x=4*3/6*2;

    // printf("%d \n", 5*2-3*2);
    // printf("%d \n", 5*2/2*3);
    // printf("%d \n", 5*(2/2)*3);
    // printf("%d \n", 5+2/2*3);

    //Control instructions: determine flow of program
    /*Sequence Control
      Decision Control
      Loop Control
      Case Control
    */
//    printf("%d \n", 3>4); //0 for false
//    printf("%d \n", 4>=4); //1 for true
//    printf("%d \n", 4 != 4); //not equal to

//    printf("%d \n", 4>3&&5>2); // && AND logical operator
//    printf("%d \n", 3>4 || 5>2); // || OR l.o.
//    printf("%d \n", !(5>1)); // ! NOT

//Practice Q
int x;
printf("Enter a no. :");
scanf("%d", &x);
printf("%d", x % 2 ==0);
//even -> 1
//odd -> 0








    
    




    return 0;
}