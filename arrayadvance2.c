// WAP in c that accept n number of array and sort thrm in decending order
#include <stdio.h>
int main (){
int i, j, k, n;

printf("Enter number:\n"); // getting number for array
scanf("%d", &n);

int num[n];
for (i=0; i<n; i++){
	printf("Enter the number %d\n", i+1);// getting value of number of array
	scanf("%d", &num[i]);
}
//sorting array
for (i=0; i<n; i++){
	for(j=0; j<n; j++){
		if (num[i]>num[j]){
			k = num[i];
			num[i]= num[j];
			num[j] = k;
		}
	}
}
for (i=0; i<n; i++){
	printf("\n%d\n", num[i]);
}
    return 0;
}
