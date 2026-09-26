#include<stdio.h>
int main()
{
	int confidence;
	int rconfidence;

	printf("Enter Model Confidence (0-100): \n");
	scanf("%d", &confidence);
	printf("Enter Required Confidence Threshold (0-100): \n");
	scanf("%d", &rconfidence);

	if(confidence >= 90)
	{
		printf("Very High Confidence\n");
	}
	else
	{
		if(confidence >= 75)
		{
			printf("High Confidence\n");
		}
		else
		{
			if(confidence >= 50)
			{
				printf("Moderate Confidence\n");
			}
			else
			{
				printf("Low Confidence\n");
			}
		}
	}

	if(confidence >= rconfidence && confidence >= 50)
	{
		printf("Prediction Accepted\n");
	}
	else
	{
		printf("Prediction Not Accepted\n");
	}

	return 0;
}
