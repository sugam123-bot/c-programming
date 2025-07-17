//Pointer variable can be accessed by using an unary argument 
#include<stdio.h>
int main (){
	 int x, y;
	 int *ptr;
	 
	 printf("Enter the value of x:\n");
	 scanf("%d", &x);
	 ptr = &x;
	 y= *ptr;
	 printf("The value of x is %d store in address of %u\n" ,x, &x);
	 printf("The value of x is %d store in address of %u\n",*(&x) ,&x);
	 printf("The value of x is %d store in address of %u\n", *ptr, ptr);
	 printf("The value of x is %d store in address of %u\n", y, &(*ptr));
	 printf("The value of y is %d store in address of %u\n", y, &y);
	 printf("The value of ptr is %d store in address of %u\n", ptr, &ptr);
	 *ptr=9;
	 printf("Now x=%d", x);
	 
	 return 0;
}
