// Write a program to display grestest number amongs three numbers using if else
#include <stdio.h>
 main(){
	
	printf("Chet Prasad Mainali\n");
	int a, b,c;
	printf("Enter the three number:\n");
	scanf("%d %d %d", &a, &b, &c);

	
		if(a>b && a>c){
		
	printf("The gretest number is %d", a);	}

	else if  (b>a && b>c){
	
	printf("The greatest number is %d", b);	}
	
	else if (c>a && c>b){
	printf("The greatest number is %d", c);}
  else {
  	printf("There is a tie among the numbers.");
  }
	return 0;
	
}
