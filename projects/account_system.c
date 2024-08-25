#include <stdio.h>
#include <string.h>

struct Account
{
    char name[50];
    char email[50];
    char password[50];
    float balance;
};

struct Account create_account();
int login(struct Account *account);
void check_balance(struct Account *account);
void deposit(struct Account *account);
void withdraw(struct Account *account);

int main()
{
    struct Account account;
    int choice;

    while (1)
    {
        printf("1. Create account\n");
        printf("2. Login\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            account = create_account();
        }
        else if (choice == 2)
        {
            if (login(&account))
            {
                int accountChoice;

                
                    printf("Welcome %s\n", account.name);
                    while (1)
                {
                    printf("What do you want to do?\n");
                    printf("1. check balance\n");
                    printf("2. deposit\n");
                    printf("3. withdraw\n");
                    printf("4. logout\n");
                    scanf("%d", &accountChoice);

                    if (accountChoice == 1)
                    {
                        check_balance(&account);
                    }
                    else if (accountChoice == 2)
                    {
                        deposit(&account);
                    }
                    else if (accountChoice == 3)
                    {
                        withdraw(&account);
                    }
                    else if (accountChoice == 4)
                    {
                        printf("Logged out\n");
                        break;
                    }

                    else
                    {
                        printf("Invalid choice\n");
                    };
                };
            };
        }
        else if (choice == 3)
        {
            return 0;
        }
        else
        {
            printf("Invalid choice\n");
            break;
        }
    }

    return 0;
}

struct Account create_account()
{
    struct Account account;

    printf("Enter your name: ");
    scanf("%s", account.name);
    printf("Enter your email: ");
    scanf("%s", account.email);
    printf("Enter your password: ");
    scanf("%s", account.password);
    account.balance = 0;

    return account;
}

int login(struct Account *account)
{
    char email[50];
    char password[50];
    int success;

    printf("Enter your email: ");
    scanf("%s", email);
    printf("Enter your password: ");
    scanf("%s", password);

    if (strcmp(account->email, email) == 0 && strcmp(account->password, password) == 0)
    {
        success = 1;
        printf("Login successful\n");
    }
    else
    {
        success = 0;
        printf("Login failed\n");
    }

    return success;
}

void check_balance(struct Account *account)
{
    if (account->balance > 0)
    {
        printf("Your balance is %.2f\n", account->balance);
    }
    else
    {
        printf("You have no balance\n");
    }
}

void deposit(struct Account *account)
{
    float amount;

    printf("Enter the amount you want to deposit: ");
    scanf("%f", &amount);

    account->balance += amount;

    printf("Your balance is %.2f\n", account->balance);
}

void withdraw(struct Account *account)
{
    float amount;

    printf("Enter the amount you want to withdraw: ");
    scanf("%f", &amount);

    if (account->balance >= amount)
    {
        account->balance -= amount;
        printf("Your balance is %.2f\n", account->balance);
    }
    else
    {
        printf("Insufficient balance\n");
    }
}