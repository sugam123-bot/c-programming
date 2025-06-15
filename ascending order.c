#include<stdio.h>
void main()
{
int num[100], i, j, n, temp;
printf("\nHow many numbers you want to sort?:\t");
scanf("%d", &n);
for(i=0;i<n;i++){

printf("Enter the number:\n");
scanf("%d", &num[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<n;j++)
{
if(num[i]>num[j])
{
temp=num[i];
num[i]=num[j];
num[j]=temp;
}
}
}
printf("\nThe numbers in ascending order are:\n");
for(i=0;i<n;i++)
printf("\t%d", num[i]);
getch();
}

