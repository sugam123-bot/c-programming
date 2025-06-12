//WAP in c that accept n number of array and sort them in ascending order
#include <stdio.h>

int main (){
    int i, j, n, k; // i for loop 
    
    
    
    printf("Enter the number:\n"); // getting the number of array from user
    scanf("%d", &n);
    int num[n]; // for array
    for (i=0; i<n; i++){
        printf("Enter number %d\n", i+1);// using for loop to get user input for each array
        scanf("%d", &num[i]);
        
    }
    //sorting value 
    for (i=0; i<n; i++){ // for making ascending order
        for (j=0; j<n; j++){
            if (num [i] < num[j]){

                 k = num[i];
                 num[i] = num[j];
                 num[j] = k;
            }
           
        }
    }
// for getting output 
    for (i=0; i<n; i++){
        printf(" \n%d\n", num[i]);
    }

    return 0;
}
