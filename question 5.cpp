#include<stdio.h>
int main()
{
	int cscore, utype;

	printf("Enter Confidence Score (0-100): \n");
	scanf("%d", &cscore);
	printf("Enter User Type (1 for Authorized, 0 for Unauthorized): \n");
	scanf("%d", &utype);

	if(cscore < 50 || utype == 0)
	{
		printf("Access Denied\n");
	}
	else
	{
		if(cscore >= 80)
		{
			if(utype == 1)
			{
				printf("Face Recognized\n");
				printf("Access Granted\n");
			}
			else
			{
				printf("Access Denied\n");
			}
		}
		else
		{
			if(cscore >= 50 && cscore <= 79)
			{
				printf("Manual Verification Required\n");
			}
			else
			{
				printf("Access Denied\n");
			}
		}
	}

	int result = (cscore >= 80) ? 1 : 0;
	printf("Check - Face Recognized: %s\n", result ? "Yes" : "No");

	return 0;
}
