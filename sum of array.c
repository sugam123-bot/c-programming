#include <stdio.h>
// C program to find sum of elements of the array
int main(){
	int i, sum=0 ,array[5];
//	printf("Enter the element of array\n");
	for (i=0; i<5; i++){
		
		printf("\n Enter the element of array\n");
		scanf("%d", &array[i]);
			}
	//	for (i=0; i<5; i++){
		//	printf("%d\n", array[i]);
	//	}
		for (i=0; i<5; i++){
			sum += array[i];
		}
		printf("\n Sum of array is %d", sum);

	
	return 0;
}
