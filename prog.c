#include <stdio.h>

int main() {
    char choice;
    float balance = 10000.00, amount;

    while (1) {
        printf("\nATM Menu:\n");
        printf("A. Check Balance\n");
        printf("B. Deposit Money\n");
        printf("C. Withdraw Money\n");
        printf("D. Exit\n");
        printf("Enter your choice: ");
        scanf("%c", &choice);

        switch (choice) {
            case 'A':
                printf("Your current balance is: ₹%.2f\n", balance);
                break;
            case 'B':
                printf("Enter the amount to deposit: ₹");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful! Your new balance is: ₹%.2f\n", balance);
                } else {
                    printf("Invalid amount.\n");
                }
                break;
            case "c':
                printf("Enter the amount to withdraw: ₹");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful! Your new balance is: ₹%.2f\n", balance);
                } else {
                    printf("Invalid amount or insufficient balance.\n");
                }
                break;
            case 'D':
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

