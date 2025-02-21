#include<stdio.h>
#include<string.h>

void printString(char arr[]);
int countlength(char arr[]);
void salting(char password[]);
void slice(char str[], int n, int m);

int vowelcount(char str[]);
void charcheck(char str[], char ch);

int main(){
    // char name[]={'A','L','I','\0'};
    // char class[]="AI-DS";

    // char firstname[]="Ali";
    // char lastname[]="Abbas";

    // printString(firstname);
    // printString(lastname);

    // char name[50];
    // scanf("%s", name);  //scanf() cannot input mutliwords strings; fgets() and puts() is being used
    // printf("Your name is %s", name);

    // char str[100];
    // fgets(str, 100, stdin);
    // puts(str);

    // char name[100];
    // fgets(name, 100, stdin);
    // printf("Length is : %d", countlength(name));

    // char name[]="Ali";
    // printf("Length is: %d", strlen(name));

    // char newstr1[]="Hello";
    // char oldstr2[]="World";
    // strcpy(newstr1, oldstr2);
    // puts(newstr1);

    // char firststr[100]="Hello ";
    // char secstr[]="World";
    // strcat(firststr, secstr);
    // puts(firststr);

    // char firststr[]="Apple";
    // char secstr[]="Banana"; //used for comparison of strings, returns 0 for equal
    // printf("%d\n",strcmp(secstr, firststr)); //+ve ASCII difference of different letter (66(B)-65(A))
    // printf("%d", strcmp(firststr, secstr)); //-ve ASCII difference of different letter (65(A)-66(B))

    // char str[100];
    // char ch;
    // int i = 0;
    // while(ch != '\n'){
    //     scanf("%c", &ch);
    //     str[i] = ch;
    //     i++;
    // }
    // str[i]= '\0';
    // puts(str);

    // char password[100];
    // scanf("%s", password);
    // salting(password);

    // char str[]="HelloWorld";
    // slice(str, 3, 6);

    // char str[]="sneha";
    // printf("Vowels are: %d", vowelcount(str));

    char str[100]="HelloWorld";
    char ch='s';
    charcheck(str, ch);
    

    return 0;

}

void printString(char arr[]){
    for(int i=0; arr[i] != '\0'; i++){
        printf("%c", arr[i]);
    }
    printf("\n");
}

int countlength(char arr[]){
    int count = 0;
    for(int i=0; arr[i]!='\0'; i++){
        count++;
    }
    return count-1;
}

void salting(char password[]){
    char salt[]="123";
    char newpass[200];

    strcpy(newpass, password); // newpass = "test"
    strcat(newpass, salt); // newpass = "test" + "123"
    puts(newpass);
}

void slice(char str[], int n, int m){
    char newStr[100];
    int j = 0;
    for(int i=n; i<=m; i++, j++){
        newStr[j] = str[i];

    }
    newStr[j]='\0';
    puts(newStr);
}

int vowelcount(char str[]){
    int count = 0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]=='a'|| str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            count++;
        }
    }
    return count;
}

void charcheck(char str[], char ch){
    for(int i=0; str[i]!='\0'; i++){
        if(str[i]==ch){
            printf("Character is present");
            return;
        }
    }
    printf("Character is NOT present");
}