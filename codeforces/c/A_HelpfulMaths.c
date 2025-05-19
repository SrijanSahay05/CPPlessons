#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(char *)a - *(char *)b);
}

int main() {
    char s[101];
    scanf("%s", s);

    // Count the number of numbers
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != '+') {
            count++;
        }
    }

    // Extract numbers into an array
    char numbers[count];
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] != '+') {
            numbers[j++] = s[i];
        }
    }

    // Sort the numbers
    qsort(numbers, count, sizeof(char), compare);

    // Reconstruct the sum
    for (int i = 0; i < count; i++) {
        printf("%c", numbers[i]);
        if (i < count - 1) {
            printf("+");
        }
    }
    printf("\n");

    return 0;
}
