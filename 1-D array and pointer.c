//WAP to demonstrate the relationship between arrays and pointer
#include<stdio.h>
int main(){
	int a[5]={10, 20, 30,40, 50};
	int i, *ptr;
	ptr= &a[0];
	printf("Chet Prasad Mainali\n");
	printf("Arrays and Pointer Equivalent:\n");
	printf("a[i]\t &a[i]\t\t *ptr\t\t ptr\t *(a+1)\t a[i]\t i[a]\n");
	for(i=0; i<5; i++){

	printf("a[%d]=%d\t, %u\t, %d\t, %u\t, %d\t, %d\t, %d\n", i, a[i], &a[i], *ptr, ptr, *(a+1), a[i], i[a]);
		}
	return 0;
}
