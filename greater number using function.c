//WAp to find the greater number using function
#include<stdio.h>
void main(){
	int a, b, c;
	printf("Enter the value of a and b:\n");
	scanf("%d%d", &a, &b);
	c = sum(a, b);
	printf("The greater number of %d and %d is %d", a, b, c);
	return;
}
int  sum(int d, int e){

if (d>e){
	return (d);
}
	else{
		return (e);
	}

}
