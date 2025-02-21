#include<stdio.h>
int bubblesort(int array[],int n)
{
 for(int i=0;i<=n;i++)
 {
 for(int j=0;j<n-i-1;j++)
 {
 if(array[j]<array[j+1])
 {
 int temp=array[j];
 array[j]=array[j+1];
 array[j+1]=temp;
 }
 }
 }
}
int main()
{
 int array[20],n,num;
 printf("Enter the number of elements:");
 scanf("%d",&n);
 printf("Enter the element at array:");
 for(int i=0;i<n;i++)
 {
 
 scanf("%d",&array[i]);
 }
 num=bubblesort(array,n);
 printf("The sorted array is:\n");
 for(int i=0;i<n;i++)
 {
 printf("%d\t",array[i]);
 }
return 0;
}