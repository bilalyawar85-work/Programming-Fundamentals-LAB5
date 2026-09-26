#include<stdio.h>
int main()
{
	int ptype;
	int ccategory, rcategory, kcategory, vcategory;
	printf("Enter 1 for Classification\n Enter 2 for Regression\n Enter 3 for Clustering\n Enter 4 for Computer Vision\n");
	scanf("%d", &ptype);
	switch (ptype)
	{
		case 1 :
		printf("Classification Selected \n");
		printf("Enter 1 for Logistic Regression\total Enter 2 for Decision Tree \total Enter 3 for KNN\total");
		scanf("%d", &ccategory);
		switch(ccategory)
		{
			case 1 :
			printf("Logistic Regression Selected\n");
			break;
		case 2 :
			printf("Decision Tree Selected\n");
			break;
		case 3 :
		 printf("KNN Selected\n");
		 break;
		default :
		printf("No Algorithm Selected\total");
		break;
		}
		break;
	case 2 :
	     printf("Regression Selected \n");
		 printf("Enter 1 for Linear Regression\n Enter 2 for Polynomial Regression\n Enter 3 for SVR\n");
		 scanf("%d", &rcategory);
		 switch(rcategory)
		 {
		 	case 1 :
		 	printf("Linear Regression Selected\n");
		 	break;
		    case 2 :
			printf("Polynomial Regression Selected\n");
			break;
			case 3 :
			printf("SVR Selected\n");
			break;
			default :
			printf("No Algorithm Selected\n");
			break;
		 }
		 break;
	case 3 :
	    printf("Clustering Selected\n");
		printf("Enter 1 for K-Means\n Enter 2 for Hierarchical Clustering \n Enter 3 for DBSCAN\n");
		scanf("%d", &kcategory);
		switch(kcategory)
		{
			case 1 :
			printf("K-Means Selected\n");
			break;
			case 2 :
				printf("Hierarchical Clustering Selected\n");
				break;
			case 3 :
			printf("DBSCAN Selected\n");
			break;
			default :
				printf("No Algorithm Selected\n");
				break;
		}
		break;
		case 4 :
		printf("Computer Vision Selected \n");
            printf("Enter 1 for CNN\n Enter 2 for YOLO \n Enter 3 for R-CNN\n");
            scanf("%d", &vcategory);
            switch (vcategory)
            {
                case 1:
                    printf("CNN Selected\n");
                    break;
                case 2:
                    printf("YOLO Selected\n");
                    break;
                case 3:
                    printf("R-CNN Selected\n");
                    break;
                default:
                    printf("No Algorithm Selected\n");
                    break;
             }
         break;
        default :
        printf("Invalid Problem Type \n");
		break;
	}
	return 0;
}
