#include <stdio.h>

// Define the Distance structure
struct Distance {
    int ft;
    int inch;
};

int main() {
    struct Distance d1, d2;

    printf("Enter the ft and inch of the first distance: ");
    scanf("%d %d", &d1.ft, &d1.inch);

    printf("Enter the ft and inch of the second distance: ");
    scanf("%d %d", &d2.ft, &d2.inch);

    printf("The total distance is: %d'%d\"\n", d1.ft + d2.ft, d1.inch + d2.inch);

    return 0;
}
