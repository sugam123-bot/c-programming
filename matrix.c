#include<stdio.h>
int main(){
	int num[4][3], i, j;
	for (i=0; i<4; i++){
	for (j=0; j<3; j++){
		printf("Enter the 4*3 matrix:\n ");
		scanf("%d", &num[i][j]);
	}
	}
	for(i=0; i<4; i++){
		for (j=0; j<3; j++){
			printf("%d\t ", num[i][j]);	
		}
	}

	return 0;
}
