#include<stdio.h>
#include<math.h>

void printHello(); //function declaration 
void printGoodbye();
void namaste();
void bonjour();
int sum(int a, int b);
void printTable(int n);
void calculatePrice(float value);
float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);

int main(){
    // printHello(); //function call
    // printGoodbye();

    // printf("Enter f for French & i for Indian: ");
    // char ch;
    // scanf("%c", &ch);


    // if(ch == 'i'){
    //     namaste();
    // }else{
    //     bonjour();
    // }


    // int a, b;
    // printf("Enter first number: ");
    // scanf("%d", &a);
    // printf("Enter second number: ");
    // scanf("%d", &b);
    // int s = sum(a, b);
    // printf("Sum is : %d \n", s);


    // int n;
    // printf("Enter number : ");
    // scanf("%d", &n);
    // printTable(n); //argument or actual parameter


    // float value = 100.0;
    // calculatePrice(value);
    // printf("Value is :%f \n", value); //argument value is not affected by the parameter conditions


    //<maths.h> -> pow(number, 2)= num^2
    // int n=4;
    // printf("%f", pow(n, 2));


    int side, rad, a, b;
    printf("Enter the side of a Square: ");
    scanf("%f", &side);
    printf("Area of square is: %f \n", squareArea(side));

    // printf("Enter the rad of a Circle:");
    // scanf("%f", &rad);
    // printf("Area of circle is: %f \n", circleArea(rad));

    // printf("Enter the length of rectangle: ");
    // scanf("%f", a);
    // printf("Enter the breath of rectangle: ");
    // scanf("%f", b);
    // printf("Area of rectangle is: %f", rectangleArea(a,b));

    
    return 0;
}

//function definition
void printHello(){
    printf("Hello! \n");
}
void printGoodbye(){
    printf("Goodbye! \n");
}

void namaste(){
    printf("Namaste \n");
}
void bonjour(){
    printf("Bonjour \n");
}

int sum(int a, int b){
    return a + b;
}

void printTable(int n){ //parameter or formal parameter
    for(int i=1; i<=10; i++){
        printf("%d \n", n*i);
    }
}

void calculatePrice(float value){
    value = value + (0.18*value);
    printf("Final price is :%f \n", value);

}

float squareArea(float side){
    return side * side;
}
float circleArea(float rad){
    return 3.14 * rad * rad;
}
float rectangleArea(float a, float b){
    return a * b;
}