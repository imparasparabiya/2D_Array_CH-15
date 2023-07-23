#include<stdio.h>

main()
{
	int a[25][25];
	int i,j,n,n2,sum=0,avg;
	   
	        printf("Enter Row = ");
	        scanf("%d",&n);
	     //   printf("Enter Column = ");
	       // scanf("%d",&n2);
	        
	        for(i=0;i<n;i++)
	        {
	        	for(j=0;j<n;j++)
	        	{
	        		printf("a[%d][%d] = ",i,j);
	        		scanf("%d",&a[i][j]);
				}
				 
			}
			
				printf("*********************\n");
	
			for(i=0;i<n;i++)
	        {
	        	for(j=0;j<n;j++)
	        	{
	        	
	        		printf("%d ",a[i][j]);
	        	
				}
				 printf("\n");
			}
				printf("*********************\n");
			for(i=0;i<n;i++)
			{
				for(j=0;j<n;j++)
				{
					sum = sum + a[i][j];
				}
				
					printf("*********************\n");
				printf("2D Array Sum = %d\n",sum);
			
				avg = sum/n;
			
				printf("2D Array Avg. = %d\n",avg);
					printf("*********************\n");
			}
			
			
			 
}
