//Write a C program to take n numbers from the user, store them in an array, and then print the array in reverse order using a loop.
#include<stdio.h>
int main(){
    int a[20], i,j;
    printf("Enter any five number:\n");
    for(i=1;i<=5;i++){
        scanf("%d", &a[i]);
    }
    printf("The reverse number are\n");
    for(i=5; i>=1; i--){
        printf("%d\n", a[i]);
    }
}
