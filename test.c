// // #include<stdio.h>
// // #include<conio.h>
// // void main()
// // {
// // float m1,m2,m3,m4,m5,sum,per;
// // printf("Enter the marks of five subjects:\n");
// // scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
// // sum=m1+m2+m3+m4+m5;
// // per=sum/5;
// // if(per>=90)
// // {
// // printf("Secured %f with grade A",per);
// // }
// // else if(per>=80&& per<90)
// // {
// // printf("Secured %f with grade B",per);
// // }
// // else if(per>=60 && per<80)
// // {
// // printf("Secured %f with grade C",per);
// // }
// // else
// // {
// // printf("Secured %f with grade D",per);
// // }
// // getch();
// // }
// #include<stdio.h>
// #include<conio.h>
// void main()
// {
// int num,i=0,sum=0;
// printf("enter the number:");
// scanf("%d",&num);
// while(i<=num)
// {
// sum=sum+i;
// i=i+1;
// }
// printf("sum of numbers upto %d is %d",num,sum);
// getch();
// }
#include<stdio.h>
#include<conio.h>
void main()
{
int num,fac=1,i=1;
printf("enter the number:");
scanf("%d",&num);
while(i<=num)
{
fac=fac*i;
i=i+1;
}
printf("the factorial of %d is %d",num,fac);
getch();
}
