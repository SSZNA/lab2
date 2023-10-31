#include <stdio.h> //standard library for input/output functions

int main() {
    int array[] = {2, 3, 6, 4, 8, 8, 10, 15, 6};
    int n = 9; 

    printf("Unique elements in the array: ");

    for (int i = 0; i < n; i++) {
        int count = 0;

        // Compares the current element with all other elements in the array
        for (int j = 0; j < n; j++) {
            if (array[i] == array[j]) {
                count++;
            }
        }

        // Count=1 means that the element is unique
        if (count == 1) {
            printf("%d ", array[i]);
        }
    }

    printf("\n");

    return 0;
}
