//WAP in c thats demonstrate the uses of external or global variables
#include<stdio.h>
int sum();
int product();
int x=5, y=10, z=15;
int main(){
	printf("The sum of all three value is %d\n", sum());
	printf("The product of all three value is %d\n", product());
	return 0;
}
int sum(){
	return (x+y+z);
}
int product(){
	return (x*y*z);
}
