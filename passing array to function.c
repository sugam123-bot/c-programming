//WAP in c that read 10 numbers in an array and finds their sum and display using the function
#include<stdio.h>
int sum( int a[20]);
void output (int a[20]);
int main(){
	int a[20], s,i;
	printf("Chet Prasad Mainali\n");
	printf("Enter 10 elements:\n");
	for (i=0; i<10; i++){
		scanf("%d", &a[i]);
	

	
			}		
				output (a);
			s = sum (a);
				printf("Sum of array element is:%d\t", s);
		return 0;
		
}
int sum(int a[20]){
	int i, s=0;
	for(i=0; i<10; i++){
		s += a[i];
	}	return (s);
	
}
void output (int a[20]){
	int i;
	printf("The elements of the array are:\n");
	for (i=0; i<10; i++){
		printf("%d\t", a[i]);
	}
	printf("\n");
}
