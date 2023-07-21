#include<stdio.h>

main()
{
	int a[25][25];
	int i,j,n1,n2;
	   
	        printf("Enter Row = ");
	        scanf("%d",&n1);
	        printf("Enter Column = ");
	        scanf("%d",&n2);
	        
	        for(i=0;i<n1;i++)
	        {
	        	for(j=0;j<n2;j++)
	        	{
	        		printf("a[%d][%d] = ",i,j);
	        		scanf("%d",&a[i][j]);
				}
				 
			}
			for(i=0;i<n1;i++)
	        {
	        	for(j=0;j<n2;j++)
	        	{
	        		printf("%d ",a[i][j]);
	        	
				}
				 printf("\n");
			}
			
			
			 
}
