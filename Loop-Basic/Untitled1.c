#include <stdio.h>

int main() {
    float a, b, result;
    int choice, division_choice;

    scanf("%f", &a);
    scanf("%f", &b);

    scanf("%d", &choice);
    if(b == 0){
        printf("Error: Divisor is zero");
    }
    switch (choice) {
        case 1:
            result = a + b;
            printf("Addition: %.2f\n", result);
            break;
        case 2:
            result = a - b;
            printf("Subtraction: %.2f\n", result);
            break;
        case 3:
            result = a * b;
            printf("Multiplication: %.2f\n", result);
            break;
        case 4:
            scanf("%d", &division_choice);
            if (division_choice == 1) {
                result = (int)a / (int)b;
                printf("Quotient: %.0f\n", result);
            } else if (division_choice == 2) {

                int remainder = (int)a % (int)b;
                printf("Remainder: %d\n", remainder);
            } else {
                printf("Invalid choice for division\n");
                return 1;
            }
            break;
        default:
            printf("Invalid choice\n");
            return 1;
    }

    return 0;
}
