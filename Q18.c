/*
Write a program that accepts a percentage (0-100) and assigns a grade based on the given criteria.
*/

#include <stdio.h>

int main() {
    int per;

    scanf("%d", &per);

    if (per >= 90 && per <= 100) {
        printf("Grade A");
    }
    else if (per >= 80) {
        printf("Grade B");
    }
    else if (per >= 70) {
        printf("Grade C");
    }
    else if (per >= 60) {
        printf("Grade D");
    }
    else {
        printf("Grade F");
    }

    return 0;
}