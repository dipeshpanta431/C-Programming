#include <stdio.h>
#include <stdbool.h>

int main() {
    int num1 = 45;
    int num2 = 77;
    
    // Check if both numbers are less than 50
    bool result = (num1 < 50) && (num2 < 50);
    
    // Print the result (0 for false, 1 for true)
    printf("%d", result);
    
    return 0;
}

