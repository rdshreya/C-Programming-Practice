#include<stdio.h>
int main()
{
    int num, guess, attempt;
    printf("Enter the number from (1 - 100): ");
    scanf("%d", &num);    
    while(1)
    {
        printf("Guess the number: ");
        scanf("%d", &guess);
        attempt++;
        if(guess < num)
        {
            printf("Greater\n");
        }
        else if(guess > num)
        {
            printf("Lesser\n");
        }
        else{
            printf("correct!!\n");
            printf("Attempts took: %d\n", attempt);
            break;
        }
    }
    return 0;
}
