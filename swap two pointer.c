//WAP to swap two pointer
#include<stdio.h>
int main(){
	int a=8, b=10;
	
	int *p;
	int *q,*r;

	printf("Chet Prasad Mainali\n");
	p=&a;
	q=&b;
	printf("*p=%d\t *q=%d\n", *p, *q);
	r=p;
	p=q;
	q=r;
	printf("*p=%d\t *q=%d\n", *p, *q);
}
