#include <stdio.h>

int main() {
    int num[5], sum = 0, largest, smallest, i;
    float average;

    printf("Enter any five numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &num[i]);
    }

    // Initialize with first element
    largest = smallest = num[0];

    // Loop through array
    for (i = 0; i < 5; i++) {
        sum += num[i];

        if (num[i] > largest) {
            largest = num[i];
        }
        if (num[i] < smallest) {
            smallest = num[i];
        }
    }

    average = (float)sum / 5;

    printf("The largest number is %d\n", largest);
    printf("The smallest number is %d\n", smallest);
    printf("The sum of five numbers is %d\n", sum);
    printf("The average is %.2f\n", average);

    return 0;
}

