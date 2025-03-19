#include <stdio.h>

int main() {
    int choice;
    float balance = 1000.00, amount;

    while (1) {
        printf("\nATM Menu:\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Your current balance is: ₹%.2f\n", balance);
                break;
            case 2:
                printf("Enter the amount to deposit: ₹");
                scanf("%f", &amount);
                if (amount > 0) {
                    balance += amount;
                    printf("Deposit successful! Your new balance is: ₹%.2f\n", balance);
                } else {
                    printf("Invalid amount.\n");
                }
                break;
            case 3:
                printf("Enter the amount to withdraw: ₹");
                scanf("%f", &amount);
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful! Your new balance is: ₹%.2f\n", balance);
                } else {
                    printf("Invalid amount or insufficient balance.\n");
                }
                break;
            case 4:
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }
}

