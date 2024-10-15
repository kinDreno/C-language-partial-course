5. Logical Operators.

Most cases ginagamit ang logical operators sa mga conditions.

&&: Logical AND | true kung parehas ng operand ay `true`.
||: Logical OR  | true kung parehas oh ang iisa sa kanila ay `true`.
!: Logical NOT  | true kung ang variable ay may boolean na false or may value na may zero.


#include <stdio.h>

int main() {
 int a = 5;
    int b = 10;

    // Logical AND
    if (a > 0 && b > 0) {
        printf("Both a and b are positive.\n");
    }

    // Logical OR
    if (a < 0 || b < 0) {
        printf("At least one of a or b is negative.\n");
    } else {
        printf("Both a and b are non-negative.\n");
    }

    // Logical NOT
    int isReady = 0; // Ang variable o ano man na may value na ZERO ay `false`
    if (!isReady) {
        printf("Not ready yet.\n");
    }

    return 0;
}