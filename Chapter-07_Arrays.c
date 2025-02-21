#include<stdio.h>

// void printNumbers(int arr[], int n);
// int countOdd(int arr[], int n);
// void reverse(int arr[], int n);
// void printArr(int arr[], int n);
int main(){
    // int marks[3];
    // printf("Enter phy: ");
    // scanf("%d", &marks[0]);

    // printf("Enter chem: ");
    // scanf("%d", &marks[1]);

    // printf("Enter maths: ");
    // scanf("%d", &marks[2]);

    // printf("phy: %d , chem: %d, maths: %d", marks[0], marks[1], marks[2]);

    // float price[3];
    // printf("enter 3 prices: ");
    // scanf("%f", &price[0]);
    // scanf("%f", &price[1]);
    // scanf("%f", &price[2]);

    // printf("Total price 1: %f ", price[0]+(0.18*price[0]));
    // printf("Total price 2: %f ", price[1]+(0.18*price[1]));
    // printf("Total price 3: %f ", price[2]+(0.18*price[2]));

    // int age = 22;
    // int *ptr = &age;
    // printf("ptr = %u\n", ptr);
    // ptr++; // 4 byte increase in int
    // printf("ptr = %u\n", ptr);
    // ptr--; // 4 byte decrease in int
    // printf("ptr = %u", ptr);

    // float price = 100;
    // float *ptr = &price;
    // printf("ptr = %u \n", ptr);
    // ptr++;
    // printf("ptr = %u \n", ptr);
    // ptr--;
    // printf("ptr = %u \n", ptr); // 4 +or- in float and int, 1 +or- in case of char

    // int age= 22;
    // int _age=22;
    // int *ptr=&age;
    // int *_ptr=&_age;

    // printf("%u, %u difference = %u \n", ptr, _ptr, ptr-_ptr); //1 int ka difference = 4 bytes thats why 1 in result.
    // _ptr=&age;
    // printf("comparison = %u \n", ptr==_ptr);

    //Array is a pointer itself.

    // int arr[]={1, 2, 3, 4, 5, 6};
    // printNumbers(arr,6);

    // int marks[2][3]; // _ _ _ | _ _ _ 
    // int marks[0][0]=90;

    // int arr[]={1, 2, 3, 4, 5, 6};
    // printf("%d", countOdd(arr, 6));
    
    // int arr[]={123,23,32,45,56,76,90};
    // reverse(arr, 7);
    // printArr(arr, 7);

    int n;
    printf("enter n: ");
    scanf("%d", &n);

    int fib[n];
    fib[0]=0;
    fib[1]=1;

    for(int i=2; i<n; i++){
        fib[i]=fib[i-1]+fib[i-2];
        printf("%d \t", fib[i]);
    }
    printf("\n");

    
    return 0;
}

// void printNumbers(int arr[], int n){
//     for (int i=0; i<=n; i++){
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }

// int countOdd(int arr[], int n){
//     int count=0;
//     for(int i=0; i<=n; i++){
//         if(arr[i] % 2 != 0){
//             count++;
//         }
//     }
//     return count;
// }

// void reverse(int arr[], int n){
//     for(int i=0; i<=n/2; i++){
//         int firstvalue=arr[i];
//         int secondvalue=arr[n-i-1];
//         arr[i]=secondvalue;
//         arr[n-i-1]=firstvalue;
//     }
// }

// void printArr(int arr[], int n){
//     for(int i=0; i<=n; i++){
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }