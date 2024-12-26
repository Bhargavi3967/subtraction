#include <stdio.h>

void subtract(int *a, int *b, int *result);

int main() {
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

        subtract(&num1, &num2, &result);

       printf("The result of %d - %d is %d\n", num1, num2, result);

    return 0;
}


void subtract(int *a, int *b, int *result) {
    *result = *a - *b;
}