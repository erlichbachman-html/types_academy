#include <stdio.h>

/*
Bank Transfer


Define struct Account with balance (float) and ownerId (int).


Read data for two accounts, transfer 20% from the first to the second, and print before/after balances.
*/

typedef struct
{
    float balance;
    unsigned int ownerId;
} Account;



int main(void)
{
    Account User1 = {
        .balance = 20.0,
        .ownerId = 1
    };

    Account User2 = {
        .balance = 10.0,
        .ownerId = 2
    };
    printf("BEFORE:\n");
    printf("User1 `ownerId`: %i, `balance`: %f\n", User1.ownerId, User1.balance);
    printf("User2 `ownerId`: %i, `balance`: %f\n", User2.ownerId, User2.balance);

    float transfer_value = User1.balance*0.2;
    User1.balance-= transfer_value;
    User2.balance+= transfer_value;
    
    printf("AFTER:\n");
    printf("User1 `ownerId`: %i, `balance`: %f\n", User1.ownerId, User1.balance);
    printf("User2 `ownerId`: %i, `balance`: %f\n", User2.ownerId, User2.balance);
    return 0;

}