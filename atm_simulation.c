#include <stdio.h>
int main()
{
    int i = 1;
    int pin = 1234;
    int LoggedIn = 0;
    int choice = 1;
    int balance = 1000;
    int money;

    while (i <= 3)
    {
        printf("Enter the pin: ");
        scanf("%d", &pin);
        if (pin == 1234)
        {
            printf("Login successfull\n");
            LoggedIn = 1;
            break;
        }
        else
        {
            printf("Wrong pin\n");
            i++;
        }
    }
        if (LoggedIn == 0)
        {
            printf("Account Loccked\n");
            return 0;
        }

        while (choice != 4)
        {
            printf("=====ATM menu=====\n");
            printf("1. Check Balance\n");
            printf("2. Deposit\n");
            printf("3. Withdraw\n");
            printf("4. Exit\n");
            scanf("%d", &choice);

            switch (choice)
            {
                case 1:
                    printf("The Balance is: %d\n", balance);
                    break;
                
                case 2:
                    printf("Enter the Deposit amount: ");
                    scanf("%d", &money);
                    if (money > 0)
                    {
                        balance = balance + money;
                        printf("After Deposit Updated Balance is: %d\n", balance);
                    }
                    else
                    {
                        printf("Invalid amount\n");
                    }
                    break;
                
                case 3:
                    printf("Enter the Withdraw amount: ");
                    scanf("%d", &money);
                    if (money > 0 && money <= balance)
                    {
                        balance = balance - money;
                        printf("After withdraw Updated Balance is: %d\n", balance);
                    }
                    else
                    {
                        printf("Insuffitiant balance\n");
                    }
                    break;

                case 4:
                    printf("Exiting\n");
                    break;

                default :
                    printf("Invalid Enter correct choice\n");
                    break;
            }
        }
        return 0;
}
