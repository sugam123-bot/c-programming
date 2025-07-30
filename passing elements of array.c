//passing elements of array
#include<stdio.h>
#include<conio.h>
void display (int, int);
void main(){
	int nums[5]={1,2,3,4,5};
	printf("\nThe array numbers passed are:\n");
	display(nums[0], nums[2]);
	getch();
}
void display (int n, int m){
	printf("%d\t%d", n, m);
}
