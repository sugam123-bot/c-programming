// WAP to count number of positive or negative number
#include<stdio.h>
int main(){
	int a[50], n,i, positive_number = 0, negative_number =0;
	printf("Enter the number of array:\n");
	scanf("%d", &n);
	printf("Enter the element of array:\n");
	for (i=0; i<n; i++){
		scanf("%d", &a[i] );
	}
	for (i=0; i<n; i++){
		if (a[i]<0)
			negative_number++;
		else 
		positive_number++;
	}
	printf("There are %d negative number in array\n", negative_number++);
	printf("There are %d positive number in array\n", positive_number++);
	
	
	return 0;
}
