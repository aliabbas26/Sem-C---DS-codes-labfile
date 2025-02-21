#include<stdio.h>

int main(){
    // int x,y;
    // printf("Enter value of x and y:");
    // scanf("%d %d", &x, &y);
    // printf("Sum of x and y:%d", x+y);

    // x=x+y;
    // y=x-y;
    // x=x-y;
    // printf("Now x=%d and y=%d", x,y);

    // int i=0;
    // for(i=0; i<=3; i++){
    //     for(int j=0; j<5; j++){
    //         if(i==5){
    //             break;
    //         }
    //         printf("* ");
    //     }
    //     printf(" \n");

    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    for(int i=2; i<num; i++){
        if(num%i==0){ 
            printf("Not prime");
            break;
            }else{
                printf("Prime");
                break;
            }
            


    } 
        
        
    return 0;
}
