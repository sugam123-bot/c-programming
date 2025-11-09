#include <stdio.h>

int main() {
    FILE *fp;
    char str[100];

    // Step 1: Open file in write mode
    printf("Chet Prasad Mainali\n");
    fp = fopen("data.txt", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter a line of text: ");
    fgets(str, sizeof(str), stdin);

    // Step 2: Write to file
    fprintf(fp, "%s", str);
    fclose(fp);

    // Step 3: Reopen file in read mode
    fp = fopen("data.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    printf("Reading from file:\n");
    while (fgets(str, sizeof(str), fp) != NULL) {
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}
