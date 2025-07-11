// WAP using function to find the greater number among three numbers.
#include<stdio.h>
int main(){
	int a, b, c, d, e;
	printf("Enter three number:\n");
	scanf("%d%d%d", &a, &b, &c);
	d = greater(a, b);
	e = greater(d, c);
	printf("The greater number among three number is %d", e);
	return 0;
}
int greater(int x, int y){
	if( x>y){
		return x;
	} 
	else {
	return y;	
	}
	}

