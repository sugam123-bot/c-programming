//WAP in c that do a recursive function of f(n)=n+f(n-1)
#include<stdio.h>
#include<conio.h>
long int function(int n);
void main(){
	
	int number, i;
	long int x;
	printf("Chet Prasad Mainali\n");
		for(i=0; i>=0; i++){
	printf("Enter the value of x:\n");
	scanf("%d", &number);


	
	x= function(number);
	printf("The value of f(x) is %ld\n", x);}
	getch();
	
}
long int function(int n)
{
	if(n==1)
	return 1;
	else
	return (n+function(n-1));
}
