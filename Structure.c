//WAP in c that illustrating name, address and salary of employee of a company in structure
#include<stdio.h>
struct employee{
	float salary;
	char name[20];    
	char address[20];
	
} e[20];
int main(){
	int i, n;
	printf("Chet Prasad Mainali");
	printf("\nEnter the number of employees:\n");
	scanf("%d", &n);
	for(i=0; i<n; i++){
		printf("Enter the name of employees%d:\n", i+1);
		scanf("%s", e[i].name);
		printf("Enter the address of employee%d:\n", i+1);
		scanf("%s", e[i].address);
		printf("Enter the salary of employee%d:\n", i+1);
		scanf("%f", &e[i].salary);
		
	}
	for(i=0;i<n; i++){
		printf ("%s is from %s and earned %f in a month.\n", e[i].name, e[i].address,e[i].salary);
	}
}
