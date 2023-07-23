#include<stdio.h>

#include<stdio.h>

main()
{
	int a[25][25],b[25][25],sum[50][50];
	int i,j,n1,n2;
	   
	        printf("Enter A Row = ");
	        scanf("%d",&n1);
	    	printf("Enter B Row = ");
	        scanf("%d",&n2);
	        
	        for(i=0;i<n1;i++)
	        {
	        	for(j=0;j<n1;j++)
	        	{
	        		printf("a[%d][%d] = ",i,j);
	        		scanf("%d",&a[i][j]);
				}
				printf("\n"); 
			}
			
				printf("*********************\n");
	
			for(i=0;i<n2;i++)
	        {
	        	for(j=0;j<n2;j++)
	        	{
	        	
	        		printf("b[%d][%d] = ",i,j);
	        		scanf("%d",&b[i][j]);
	        	
				}
				 printf("\n");
			}
				printf("*********************\n");
			 printf("2D Array A : \n");
				for(i=0;i<n1;i++)
			  {
 				for(j=0;j<n1;j++)
 				{
 					printf("%d ",a[i][j]);
				 }
				 printf("\n");
			  }
			printf("2D Array B : \n");
			 for(i=0;i<n2;i++)
			  {
 				for(j=0;j<n2;j++)
 				{
 					printf("%d ",b[i][j]);
				 }
				 printf("\n");
			  }
			
			
			for(i=0;i<n1;i++)
			{
				for(j=0;j<n1;j++)
				{
				 for(i=0;i<n2;i++)
				 {
				 	for(j=0;j<n2;j++)
				 	{
				 		sum[i][j] = a[i][j] + b[i][j];
					 }
				 }
				}
	     	}
				
					printf("*********************\n");
				printf("Sum Of Two 2D Array = \n");
		
			for(i=0;i<n1;i++)
			{
				for(j=0;j<n1;j++)
				{
				 for(i=0;i<n2;i++)
				 {
				 	for(j=0;j<n2;j++)
				 	{
				 		printf("%d ",sum[i][j]);
				    }
				    	printf("\n");
				 }
				}
				printf("\n");
	     	}
			
			
			 
}
