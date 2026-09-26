#include<stdio.h>
int main()
{
	int category;
	int acategory, vcategory, fcategory, hcategory;
	printf("Enter 1 for Animal\n Enter 2 for Vehicle\n Enter 3 for Food\n Enter 4 for Human\n");
	scanf("%d", &category);
	switch (category)
	{
		case 1 : 
		printf("Animal Selected \n");
		printf("Enter 1 for Cat\n Enter 2 for Dog \n Enter 3 for Bird\n");
		scanf("%d", &acategory);
		switch(acategory)
		{
			case 1 : 
			printf("You selected Cat\n");
			break;
		case 2 :
			printf("You selected Dog\n");
			break;
		case 3 : 
		 printf("You selected Bird\n");
		 break;
		default : 
		printf("No Animal Selected\n");
		break;	
		}
		break;
	case 2 : 
	     printf("Vehicle Selected \n");
		 printf("Enter 1 for Car\n Enter 2 for Bus\n Enter 3 for Bike\n");
		 scanf("%d", &vcategory);
		 switch(vcategory)
		 {
		 	case 1 : 
		 	printf("You selected Car\n");
		 	break;
		    case 2 :
			printf("You selected Bus\n");
			break;
			case 3 : 
			printf("You selected Bike\n");
			break;	
			default :
			printf("No Vehicle Selected\n");
			break;
		 }
		 break;
	case 3 : 
	    printf("Food Selected\n");
		printf("Enter 1 for Pizza\n Enter 2 for Burger \n Enter 3 for Biryani\n");
		scanf("%d", &fcategory);
		switch(fcategory)
		{
			case 1 : 
			printf("Pizza Selected\n");
			break;
			case 2 :
				printf("Burger Selected \n");
				break;
			case 3 :
			printf("Biryani Selected \n");
			break;	
			default :
				printf("No Food Selected\n");
		}
		break;
		case 4 : 
		printf("Human Selected \n");
            printf("Enter 1 for Male\n Enter 2 for Female \n Enter 3 for Child\n");
            scanf("%d", &hcategory);
            switch (hcategory)
            {
                case 1:
                    printf("You selected Male\n");
                    break;
                case 2:
                    printf("You selected Female\n");
                    break;
                case 3:
                    printf("You selected Child\n");
                    break;
                default:
                    printf("No Human Selected\n");
                    break;
             }
         break;
        default : 
        printf("Invalid Category \n");
		break;	
	}
	return 0;
}
