/* WAP to input values into an array and display them*/
#include <stdio.h>
int main (){
	int arr[5], i;
	for (i=0; i<5; i++){
		printf("\nEnter the element for arr[%d]", i);
		scanf("%d", &arr[i]);
	}
	printf("The array elements are\n");
	for (i=0; i<5; i++){
		printf("arr[%d]=%d\n", i, arr[i]);
	}


return 0;
}
