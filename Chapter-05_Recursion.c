#include<stdio.h>

void printHW(int count);
int sum(int n);
int fact(int n);
int fib(int n);

float convertTemp(float celsius);
int calcPercentage(int science,int maths,int english);

int main(){
    // printHW(7);

    // printf("Sum is :%d", sum(5));

    // printf("Factorial is :%d", fact(5));

    printf("%d", fib(6));


    // float far = convertTemp(37);
    // printf("Far: %f", far);

    // int science = 95;
    // int maths = 99;
    // int english = 91;

    // printf("Percentage is: %d", calcPercentage(science, maths, english));



    
    return 0;
}

//recursive function
void printHW(int count){
    if(count == 0){
        return;
    }
    printf("Hello World \n");
    printHW(count-1);
}

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNm1 = sum(n-1); //sum of 1 to n
    int sumN = sumNm1 + n;
    return sumN;
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int factNm1 = fact(n-1); //factorial of 1 to n-1
    int factN = factNm1 * n;
    return factN;
}

int fib(int n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    
    int fibNm1 = fib(n-1);
    int fibNm2 = fib(n-2);
    int fibN = fibNm1 + fibNm2;
    // printf("Fib of %d is: %d \n", n, fibN);
    return fibN;
}


float convertTemp(float celsius){
    float far = celsius * (9.0/5.0) + 32;
    return far;
}

int calcPercentage(int science, int maths, int english){
    return (science + maths + english) / 3;
}