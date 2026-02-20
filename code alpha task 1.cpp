#include <stdio.h>

int main() {
    int a, b;
    char o;

    printf("NOTE:\n ADDITION------->'+'\n SUBTRACTION---->'-'\n MULTIPLICATION->'*'\n DIVISION------->'/'\nEnter operation (example: 5 + 3): ");
    scanf("%d %c %d", &a, &o, &b);

    switch(o) {
        case '+':
            printf("Ans = %d", a + b);
            break;
        case '-':
            printf("Ans = %d", a - b);
            break;
        case '*':
            printf("Ans = %d", a * b);
            break;
        case '/':
            printf("Ans = %.2f", (float)a / b);
            break;
        default:
            printf("Invalid operator");
    }

    return 0;
}
