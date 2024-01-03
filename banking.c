//BANKING :-
#include <stdio.h>

int account_balance = 100000;

int deposit() {
    int deposited_amt = 0;

    printf("Enter the amount you want to deposit: ");
    scanf("%d", &deposited_amt);

    if (deposited_amt > 0) {
        account_balance += deposited_amt;
        printf("Deposited %d. Your current balance is: %d\n\n", deposited_amt, account_balance);
    } else {
        printf("Invalid deposited amount.\n\n");
    }
}

int withdrawal() {
    int withdrawal_amt = 0;

    printf("Enter the amount you want to withdraw: ");
    scanf("%d", &withdrawal_amt);

    if (withdrawal_amt > 0 && withdrawal_amt <= account_balance) {
        account_balance -= withdrawal_amt;
        printf("Withdrawn amount %d. Your current balance is: %d\n\n", withdrawal_amt, account_balance);
    } else {
        printf("Invalid withdrawal amount or insufficient balance.\n\n");
    }
}

int transfer() {
    int transfer_amt = 0;
    int target_account;

    printf("Enter the target account number: ");
    scanf("%d", &target_account);

    printf("Enter the amount you want to transfer: ");
    scanf("%d", &transfer_amt);

    if (transfer_amt > 0 && transfer_amt <= account_balance) {
        account_balance -= transfer_amt;
        printf("Transferred amount %d to account %d. Your current balance is: %d\n\n", transfer_amt, target_account, account_balance);
    } else {
        printf("Invalid transfer amount or insufficient balance.\n\n");
    }
}

int check_balance() {
    printf("Your current bank balance is: %d\n", account_balance);
}

int main() {
    printf("Welcome to Simple ATM!\n");

    int option;
    char continue_option;

    do {
        printf("\nEnter 1. for depositing amount\nEnter 2. for withdrawing amount\nEnter 3. for transferring funds\nEnter 4. for checking balance\n");
        scanf("%d", &option);

        switch (option) {
            case 1:
                deposit();
                break;
            case 2:
                withdrawal();
                break;
            case 3:
                transfer();
                break;
            case 4:
                check_balance();
                break;
            default:
                printf("Invalid option.\n");
                break;
        }

        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &continue_option);

    } while (continue_option == 'y' || continue_option == 'Y');

    printf("Thank you for using Simple ATM!\n");

    return 0;
}



