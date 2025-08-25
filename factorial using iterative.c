#include<stdio.h>
int main(){
    int i, a;
    long fact = 1;
    printf("Enter any number:\n");
    scanf("%d", &a);
    if(a<0){
        printf("The given number donot have any factoial\n");
    }
    else if(a==1 || a==0){
        printf("The factorial of %d is 1\n", a);
        
    }
    else {

    for(i=1; i<=a;i++){
        fact *=i;
    }
    printf("The factorial of %d is %ld", a, fact);
  	}
    return 0;
}
