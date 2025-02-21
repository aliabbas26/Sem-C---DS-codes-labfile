#include<stdio.h>
#include<conio.h>
void main()
{
int num,i=0,f1=0,f2=1,f3=0;

printf("Enter the numebr:");
scanf("%d",&num);
printf("The fibonacci series upto %d terms are\n",num);
printf("%d\n",f1);
printf("%d\n",f2);
for(i=0;i<num-2;i++)
{
f3=f1+f2;
printf("%d\n",f3);
f1=f2;
f2=f3;
}
getch();
}