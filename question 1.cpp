#include <stdio.h>

int main()
{
    int pmarks, mmarks, amarks, apercentage;
    float avg;

    printf("Enter Your Programming Marks : \n");
    scanf("%d", &pmarks);

    printf("Enter Your Mathematics Marks : \n");
    scanf("%d", &mmarks);

    printf("Enter Your AI Marks : \n");
    scanf("%d", &amarks);

    printf("Enter Your Attendance in %% : \n");
    scanf("%d", &apercentage);

    if(pmarks >= 50)
    {
        if(mmarks >= 50)
        {
            if(amarks >= 50)
            {
                if(apercentage >= 75)
                {
                    printf("Eligible\n");

                    avg = (pmarks + mmarks + amarks) / 3.0;

                    if(avg >= 80)
                    {
                        printf("EXCELLENT\n");
                    }
                    else if(avg >= 70)
                    {
                        printf("VERY GOOD\n");
                    }
                    else if(avg >= 60)
                    {
                        printf("GOOD\n");
                    }
                    else if(avg >= 50)
                    {
                        printf("SATISFACTORY\n");
                    }
                    else
                    {
                        printf("POOR\n");
                    }
                }
                else
                {
                    printf("Not Eligible\n");
                }
            }
            else
            {
                printf("Not Eligible\n");
            }
        }
        else
        {
            printf("Not Eligible\n");
        }
    }
    else
    {
        printf("Not Eligible\n");
    }

    return 0;
}
