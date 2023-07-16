#include <stdio.h>
#include <stdlib.h>
//Write a program to read 10 numbers from the keyboard and find their sum and average


int main()

    {
    int numbers[10];
    int sum = 0;

    printf("Enter 10 numbers:\n");

    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    double average = (double)sum / 10;

    printf("Sum: %d\n", sum);
    printf("Average: %.2f\n", average);

    return 0;

    }

