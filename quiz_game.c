#include <stdio.h>

int main()
{
    int answer, score;
    char ready, again;

    printf("===== QUIZ GAME =====\n");
    printf("Instructions:\n");
    printf("1. There are 5 questions.\n");
    printf("2. Each question has 4 options (1-4).\n");
    printf("3. Enter the correct option number.\n");
    printf("========================\n");

    do
    {
        printf("Are you ready (y/n): ");
        scanf(" %c", &ready);

        if (ready == 'y' || ready == 'Y')
        {
            score = 0;

            // Question 1
            do
            {
                printf("\nQuestion 1:\n");
                printf("2 + 3 = ?\n");
                printf("1) 4  2) 5  3) 6  4) 7\n");
                printf("Enter your answer (1-4): ");
                scanf("%d", &answer);

                switch (answer)
                {
                    case 2:
                        printf("Correct!\n");
                        score++;
                        break;
                    case 1:
                    case 3:
                    case 4:
                        printf("Wrong! Try again.\n");
                        break;
                    default:
                        printf("Invalid option! Enter 1-4.\n");
                }
            } while (answer != 2);

            // Question 2
            do
            {
                printf("\nQuestion 2:\n");
                printf("10 - 5 = ?\n");
                printf("1) 5  2) 6  3) 7  4) 8\n");
                printf("Enter your answer (1-4): ");
                scanf("%d", &answer);

                switch (answer)
                {
                    case 1:
                        printf("Correct!\n");
                        score++;
                        break;
                    case 2:
                    case 3:
                    case 4:
                        printf("Wrong! Try again.\n");
                        break;
                    default:
                        printf("Invalid option! Enter 1-4.\n");
                }
            } while (answer != 1);

            // Question 3
            do
            {
                printf("\nQuestion 3:\n");
                printf("3 * 3 = ?\n");
                printf("1) 6  2) 8  3) 9  4) 12\n");
                printf("Enter your answer (1-4): ");
                scanf("%d", &answer);

                switch (answer)
                {
                    case 3:
                        printf("Correct!\n");
                        score++;
                        break;
                    case 1:
                    case 2:
                    case 4:
                        printf("Wrong! Try again.\n");
                        break;
                    default:
                        printf("Invalid option! Enter 1-4.\n");
                }
            } while (answer != 3);

            // Question 4
            do
            {
                printf("\nQuestion 4:\n");
                printf("16 / 4 = ?\n");
                printf("1) 2  2) 3  3) 5  4) 4\n");
                printf("Enter your answer (1-4): ");
                scanf("%d", &answer);

                switch (answer)
                {
                    case 4:
                        printf("Correct!\n");
                        score++;
                        break;
                    case 1:
                    case 2:
                    case 3:
                        printf("Wrong! Try again.\n");
                        break;
                    default:
                        printf("Invalid option! Enter 1-4.\n");
                }
            } while (answer != 4);

            // Question 5
            do
            {
                printf("\nQuestion 5:\n");
                printf("7 + 1 = ?\n");
                printf("1) 6  2) 8  3) 9  4) 10\n");
                printf("Enter your answer (1-4): ");
                scanf("%d", &answer);

                switch (answer)
                {
                    case 2:
                        printf("Correct!\n");
                        score++;
                        break;
                    case 1:
                    case 3:
                    case 4:
                        printf("Wrong! Try again.\n");
                        break;
                    default:
                        printf("Invalid option! Enter 1-4.\n");
                }
            } while (answer != 2);

            printf("\n========================\n");
            printf("Final Score: %d/5\n", score);
        }
        else if (ready == 'n' || ready == 'N')
        {
            printf("Okay, come back later!\n");
            break;
        }
        else
        {
            printf("Invalid input! Enter y or n.\n");
            continue;
        }

        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &again);

    } while (again == 'y' || again == 'Y');

    printf("Thank you for playing!\n");

    return 0;
}
