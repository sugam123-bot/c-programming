//WAP to read age of n students and count the number of students of the age between 15 to 22
#include <stdio.h>
int main(){
	int a, i, n, age[100];
	printf("Enter the number of students:\n");
	scanf("%d", &n);
	
	for (i=0; i<n; i++){
		printf("Enter the age of student:\n");
		scanf("%d", &age[i]);
		if (age[i]>15 && age[i]<22){
			a++; 
		}
		
	}
	printf("The total number of students from 15 to 22 is %d", a);
	return 0;
}
