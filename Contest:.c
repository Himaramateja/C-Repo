#include <stdio.h>

int main() {
    int X, A, B;

    // Input: reading three space-separated integers
    scanf("%d %d %d", &X, &A, &B);

    // Calculate the total score
    int total_score = A * 1 + B * 2;

    // Check if the Professor qualifies
    if (total_score >= X) {
        printf("Qualify\n");
    } else {
        printf("Not Qualify\n");
    }

    return 0;
}
