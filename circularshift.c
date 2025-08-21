//WAP in c that gives three variables x, y, and z, write a function to circularly shift their variable
#include<stdio.h>
int circularshift(int*, int*, int*);
int main(){
	int x=5, y=10, z=15;
	printf("Before circular shift- x,y, and z are: %d\t%d\t%d\t\n", x, y,z);
	circularshift(&x, &y,&z);
	printf("After circular shift- x,y, and z are: %d\t%d\t%d\t", x,y,z);
	return 0;
}
int circularshift(int*x, int*y, int*z){
int temp1,temp2;
temp1 = *x;
temp2= *y;
*x= *z;
*y= temp1;
*z= temp2;
return(*x, *y, *z);
}
