#include<stdio.h>

main()

{
	int a[25][25];
	int i,j,n1,n2,sum;
	
	printf("Enter Row = ");
	scanf("%d",&n1);
	printf("Enter Column = ");
	scanf("%d",&n2);
	
	for(i=0;i<n1;i++)
	 {
	 	for(j=0;j<n2;j++)
	 	{
	 		printf("a[%d][%d]",i,j);
	 		scanf("%d",&a[i][j]);
		 }
		 printf("\n");
	 }
	 for(i=0;i<n1;i++)
	 {
	 	for(j=0;j<n2;j++)
	 	{
	 		printf("%d ",a[i][j]);
		 }
		 printf("\n");
	 }
	 printf("*Sum Of Row*\n");
	 for(i=0;i<n1;i++)
	 {
	 	sum=0;
	 	
	 	for(j=0;j<n2;j++)
	 	{
	 		sum = sum + a[i][j];
		}
	
		printf("\n Row Sum %d =  %d \n",i,sum); 
	 }
	 
}
