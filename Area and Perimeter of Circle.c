#include <stdio.h>

int main() {
    int radius;
    float area, perimeter;
    const float pi = 3.14;

    // Read the radius of the circle
    scanf("%d", &radius);

    // Calculate area and perimeter
    area = pi * radius * radius;
    perimeter = 2 * pi * radius;

    // Print the results with 2 decimal places
    printf("%.2f\n", area);
    printf("%.2f\n", perimeter);

    return 0;
}