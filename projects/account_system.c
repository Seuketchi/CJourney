#include <stdio.h>

struct Account {
    char name[50];
    char email[50];
    char password[50];
};

void create_account(struct Account account);


int main() {
    struct Account account;
    create_account(account);
    return 0;
}

void create_account(struct Account account) {
    printf("Enter your name: ");
    scanf("%s", account.name);
    printf("Enter your email: ");
    scanf("%s", account.email);
    printf("Enter your password: ");
    scanf("%s", account.password);
}