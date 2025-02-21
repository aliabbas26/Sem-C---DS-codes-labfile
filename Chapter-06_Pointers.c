#include<stdio.h>

void _square(int *n);

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    // int age = 22;
    // int *ptr = &age;
    // int _age = *ptr;

    // printf("%d", _age);

    // int *ptr, char *ptr, float *ptr || %p for pointer specifier (hexadeci value) or use %u (unsigned int) normal value

    //address
    // printf("%p \n", &age);
    // printf("%u \n", &age);
    // printf("%u \n", ptr);

    // printf("%u \n", &ptr);

    //values
    // printf("%d \n", age);
    // printf("%d\n", *ptr);
    // printf("%d\n", *(&age));

    // int *ptr;
    // int x;
    // ptr = &x; // x = 0
    // *ptr = 0;
    // printf("%d\n", x); // 0
    // printf("%d\n", *ptr); // 0

    // *ptr+=5;
    // printf("%d\n", x); // 5
    // printf("%d\n", *ptr); // 5

    // (*ptr)++;
    // printf("%d\n", x); // 6
    // printf("%d\n", *ptr); // 6

    //Pointer to pointer int **pptr; char **pptr; float **pptr;

    // int i=5;
    // int *ptr=&i;
    // int **pptr=&ptr;

    // printf("%d \n", *(*pptr)); //value k lie * and address k lie &
    //  printf("%d", **pptr); 

    // Fn call by reference
    // int number = 4;
    // _square(&number);
    // printf("Number = %d", number);

    int x=3, y=5;
    // swap(x, y);
    // printf(" x = %d\n", x);
    // printf(" y = %d\n", y);

    _swap(&x , &y);
    printf(" x = %d\n", x);
    printf(" y = %d\n", y);

    return 0;
}

void _square(int *n){
    *n = (*n) * (*n);
    printf("Square= %d \n", n);
}

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
    printf("a= %d \n", a);
    printf("b = %d\n", b);
}

void _swap(int *a, int *b){
    int t= *a;
    *a = *b;
    *b = t;
    printf("a= %d \n", *a);
    printf("b = %d\n", *b);
}