#include <stdio.h>

int main() {
    float basic_salary, gross_salary, DA, HRA;

    // Read the basic salary
    scanf("%f", &basic_salary);

    // Calculate DA and HRA based on the conditions
    if (basic_salary <= 10000) {
        DA = 0.80 * basic_salary;
        HRA = 0.20 * basic_salary;
    } else if (basic_salary <= 20000) {
        DA = 0.90 * basic_salary;
        HRA = 0.25 * basic_salary;
    } else {
        DA = 0.95 * basic_salary;
        HRA = 0.30 * basic_salary;
    }

    // Calculate gross salary
    gross_salary = basic_salary + DA + HRA;

    // Print the gross salary with 2 decimal places
    printf("%.2f\n", gross_salary);

    return 0;
}