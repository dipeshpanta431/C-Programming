#include <stdio.h>
#include <stdbool.h>

int main() {
    bool p, q, result;
    int pInt, qInt;

    // Read two integers from the user
    scanf("%d %d", &pInt, &qInt);

    // Convert the integers to boolean values
    p = pInt != 0; // p will be true (1) if pInt is not zero, otherwise false (0)
    q = qInt != 0; // q will be true (1) if qInt is not zero, otherwise false (0)

    // Perform XOR operation
    result = p ^ q;

    // Print the result (0 or 1)
    printf("%d", result);

    return 0;
}

