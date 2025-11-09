#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    FILE *fptr;
    printf("Chet Prasad Mainali\n");
    fptr = fopen("file.txt", "w");  // open file in write mode
    if (fptr == NULL)
    {
        printf("Error opening file!\n");
        exit(1);
    }

    // Take input from user via terminal
    printf("Enter num:\n");
    scanf("%d", &num);

    // Write to file
    fprintf(fptr, "The given number is: %d\n", num);
    fprintf(fptr, "The square of the given number is: %d\n", num * num);


    fclose(fptr);
    return 0;
}
