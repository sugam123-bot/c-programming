//WAP to illustrating use of array of pointer
#include<stdio.h>
int main(){
	int a[5]={10,11,12,13,14 };
	int *p[5];
	int i;
	for(i=0;i<a[i];i++){
		p[i]= &a[i];
		printf("\np[%d]=%d",i, *p[i]);
	}
	printf("\nChet Prasad Mainali");
	return 0;
}
