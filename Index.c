
#include <stdio.h>
#include <stdlib.h>

int main() {
	double balance = 10000.00; /* initial balance */
	int choice;
	double amount;

	while (1) {
		printf("\n=== Simple Bank System ===\n");
		printf("1. Check Balance\n");
		printf("2. Withdraw\n");
		printf("3. Exit\n");
		printf("Select an option: ");
		if (scanf("%d", &choice) != 1) {
			/* invalid input, clear stdin */
			int c;
			while ((c = getchar()) != '\n' && c != EOF) {}
			printf("Invalid input. Try again.\n");
			continue;
		}

		switch (choice) {
			case 1:
				printf("Current balance: $%.2f\n", balance);
				break;
			case 2:
				printf("Enter amount to withdraw: ");
				if (scanf("%lf", &amount) != 1) {
					int c;
					while ((c = getchar()) != '\n' && c != EOF) {}
					printf("Invalid amount.\n");
					break;
				}
				if (amount <= 0) {
					printf("Enter a positive amount.\n");
				} else if (amount > balance) {
					printf("Insufficient funds. Available: $%.2f\n", balance);
				} else {
					balance -= amount;
					printf("Please collect your cash: $%.2f\n", amount);
					printf("Remaining balance: $%.2f\n", balance);
				}
				break;
			case 3:
				printf("Thank you. Goodbye.\n");
				exit(0);
			default:
				printf("Invalid option.\n");
		}
	}

	return 0;
}
