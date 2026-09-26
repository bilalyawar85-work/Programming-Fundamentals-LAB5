#include<stdio.h>
int main()
{
	int category;
	int gcategory, scategory, wcategory, hcategory;
	printf("Enter 1 for Greeting\n Enter 2 for Study\n Enter 3 for Weather\n Enter 4 for Help\n");
	scanf("%d", &category);
	switch (category)
	{
		case 1 : 
		printf("Greeting Selected \n");
		printf("Enter 1 for Hello\n Enter 2 for How are you \n Enter 3 for Goodbye\n");
		scanf("%d", &gcategory);
		switch(gcategory)
		{
			case 1 : 
			printf("Hello! Nice to see you.\n");
			break;
		case 2 :
			printf("I am doing great, thank you for asking!\n");
			break;
		case 3 : 
		 printf("Goodbye! Have a nice day.\n");
		 break;
		default : 
		printf("No Greeting Selected\n");
		break;	
		}
		break;
	case 2 : 
	     printf("Study Selected \n");
		 printf("Enter 1 for Programming\n Enter 2 for Mathematics\n Enter 3 for AI\n");
		 scanf("%d", &scategory);
		 switch(scategory)
		 {
		 	case 1 : 
		 	printf("Programming is the process of writing instructions for a computer.\n");
		 	break;
		    case 2 :
			printf("Mathematics is the study of numbers, shapes, and patterns.\n");
			break;
			case 3 : 
			printf("AI stands for Artificial Intelligence, machines that mimic human thinking.\n");
			break;	
			default :
			printf("No Study Topic Selected\n");
			break;
		 }
		 break;
	case 3 : 
	    printf("Weather Selected\n");
		printf("Enter 1 for Today\n Enter 2 for Tomorrow \n Enter 3 for Forecast\n");
		scanf("%d", &wcategory);
		switch(wcategory)
		{
			case 1 : 
			printf("Today's weather looks sunny and pleasant.\n");
			break;
			case 2 :
				printf("Tomorrow may bring light clouds and a mild breeze.\n");
				break;
			case 3 :
			printf("The forecast for this week shows mostly clear skies.\n");
			break;	
			default :
				printf("No Weather Option Selected\n");
				break;
		}
		break;
		case 4 : 
		printf("Help Selected \n");
            printf("Enter 1 for About Chatbot\n Enter 2 for Commands \n Enter 3 for Exit\n");
            scanf("%d", &hcategory);
            switch (hcategory)
            {
                case 1:
                    printf("I am a simple rule-based chatbot built in C.\n");
                    break;
                case 2:
                    printf("You can choose Greeting, Study, Weather, or Help.\n");
                    break;
                case 3:
                    printf("Exiting chatbot. Goodbye!\n");
                    break;
                default:
                    printf("No Help Option Selected\n");
                    break;
             }
         break;
        default : 
        printf("Invalid Category \n");
		break;	
	}
	return 0;
}
