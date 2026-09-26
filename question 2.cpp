#include <stdio.h>
int main()
{
    int age, income, cscore;
    int loan;

    printf("Enter Your Age : \n");
    scanf("%d", &age);

    printf("Enter Your income : \n");
    scanf("%d", &income);

    printf("Enter Your credit score : \n");
    scanf("%d", &cscore);

    printf("Press 0 if you don't have an existing loan \n Press 1 if you have an existing loan\n");
    scanf("%d", &loan);

    if (age >= 21)
    {
        if (income >= 100000 && cscore >= 750 && loan == 0)
        {
            printf("High Approval Chance\n");
        }
        else
        {
            if (income >= 75000 && cscore >= 650 && loan == 1)
            {
                printf("Manual Review\n");
            }
            else
            {
                if (income >= 50000 && cscore >= 600)
                {
                    printf("Possibly Eligible\n");
                }
                else
                {
                    printf("Rejected\n");
                }
            }
        }
    }
    else
    {
        printf("Result: Rejected\n");
    }

    return 0;
}
