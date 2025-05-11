#include <stdio.h>
#include <math.h>

void show_menu() {
    printf("\n--- ADVANCED CALCULATOR ---\n");
    printf("Choose an operation:\n");
    printf("1. Addition (+)\n");
    printf("2. Subtraction (-)\n");
    printf("3. Multiplication (*)\n");
    printf("4. Division (/)\n");
    printf("5. Modulus (%%)\n");
    printf("6. Power (^)\n");
    printf("7. Square Root (√)\n");
    printf("8. Trigonometry (sin, cos, tan)\n");
    printf("9. Logarithm (log)\n");
    printf("0. Exit\n");
}

int main() {
    int choice;
    float num1, num2, result;
    char trig_func;
    
    do {
        show_menu();
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: case 2: case 3: case 4: case 5:
                printf("Enter two numbers: ");
                scanf("%f %f", &num1, &num2);
                result = (choice == 1) ? num1 + num2 :
                         (choice == 2) ? num1 - num2 :
                         (choice == 3) ? num1 * num2 :
                         (choice == 4) ? (num2 != 0 ? num1 / num2 : (printf("Error! Division by zero.\n"), 0)) :
                         (choice == 5) ? (int)num1 % (int)num2 : 0;
                printf("Result: %.2f\n", result);
                break;
                
            case 6:
                printf("Enter base and exponent: ");
                scanf("%f %f", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2f\n", result);
                break;
                
            case 7:
                printf("Enter a number: ");
                scanf("%f", &num1);
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error! Square root of negative numbers is not supported.\n");
                }
                break;
                
            case 8:
                printf("Choose a function (s: sin, c: cos, t: tan): ");
                scanf(" %c", &trig_func);
                printf("Enter an angle in degrees: ");
                scanf("%f", &num1);
                num1 = num1 * (M_PI / 180); // Convert to radians
                result = (trig_func == 's') ? sin(num1) :
                         (trig_func == 'c') ? cos(num1) :
                         (trig_func == 't') ? tan(num1) : 0;
                printf("Result: %.2f\n", result);
                break;
                
            case 9:
                printf("Enter a number: ");
                scanf("%f", &num1);
                if (num1 > 0) {
                    result = log(num1);
                    printf("Result: %.2f\n", result);
                } else {
                    printf("Error! Logarithm of non-positive numbers is undefined.\n");
                }
                break;
                
            case 0:
                printf("Exiting the calculator...\n");
                break;
                
            default:
                printf("Invalid choice! Try again.\n");
        }
        
    } while (choice != 0);

    return 0;
}