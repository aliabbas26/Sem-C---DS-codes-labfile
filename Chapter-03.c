#include<stdio.h>

int main(){
    // int age;
    // printf("Enter age: ");
    // scanf("%d", &age);

    // if(age >= 18){
    //     printf("Adult \n"); //curly bracket is only for multiple statements but good  programmer use {} in every case.
    //     printf("They can vote \n");
    //     printf("They can drive \n");
    // }
    // else{
    //     printf("Not adult \n");
    // }
    // printf("Thank You");

    // age >= 18 ? printf("Adult \n") : printf("Not Adult \n"); //Ternary conditional operator- Condition ? doSomething if TRUE : doSomething if FALSE;

    // 
    // int number;
    // printf("Enter a number:");
    // scanf("%d", &number);
    // if(number >= 0){
    //     printf("Positive \n");
    //     if(number % 2 == 0){
    //         printf("Even \n");
    //     } else{
    //         printf("Odd \n");
    //     }
    // } else{
    //     printf("Negative");
    // }

    // int marks;
    // printf("Enter the marks(out of 100):");
    // scanf("%d", &marks);
    // if(marks>30 && marks <=100){
    //     printf("PASS");
    // } else if(marks>=0 && marks<=30){
    //     printf("FAIL");
    // } else{
    //     printf("Wrong marks entered!");
    // }

    // marks <= 30 ? printf("Fail") : printf("Pass"); //Ternary statements

    // if(marks <30){
    //     printf("Grade C");
    // } else if(marks >=30 && marks <70){
    //     printf("Grade B");
    // } else if(marks >=70 && marks <90){
    //     printf("Grade A");
    // } else if(marks >=90 && marks <=100){
    //     printf("Grade A+");
    // } else{
    //     printf("Wrong marks entered!!");
    // }
    
    // int num;
    // printf("Enter the number:");
    // scanf("%d", &num);
    // if(num>=1){
    //     printf("It is a natural number.");
    // } else{
    //     printf("It is not a natural number");
    // }

    int day=1; //1-Mon, 2-Tues, etc
    printf("Enter the number(1-7):");
    scanf("%d" , &day);
    switch(day){
        case 1 : printf("Monday \n");
                 break;
        case 2 : printf("Tuesday \n");
                 break;
        case 3 : printf("Wednesday \n");
                 break;
        case 4 : printf("Thurday \n");
                 break;
        case 5 : printf("Friday \n");
                 break;
        case 6 : printf("Saturday \n");
                 break;
        case 7 : printf("Sunday \n");
                 break;

    }

    
    

    
    return 0;


        

    }



    