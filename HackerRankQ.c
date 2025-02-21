#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    char ch;
    scanf("%c",&ch);
    printf("%c",ch);
    
    char s;
    scanf("%s",&s);
    printf("%s",s);
    
    char sen;
    scanf("%[^\n]%*c",&sen);
    printf("%c",sen);
    return 0;
}