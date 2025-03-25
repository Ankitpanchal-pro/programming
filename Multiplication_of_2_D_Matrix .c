#include<stdio.h>

main()
{
	
	int i,j,k;
	int m=2;
	int n=2;
	int p=2;
	int q=2;

	 
	 if(n!=p)
	 {
	 	printf(" Invalid Multipication!!");
	 }
	 

	 else
	 
{

	
	printf("\n-----------Matrix :1------------\n");		
	int a[m][n];
    
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("Enter First Matrix Elements: ");
			 scanf("%d",&a[i][j]);
	 		
		 }
	 }
	 printf("\nFirst Matrix Elements Are:\n\n");
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<n;j++)
	 	{
	 		printf("%d\t",a[i][j]);
			 
	 		
		 }printf("\n");
	 }
	 
	 printf("**********************************\n");
	printf("\n-----------Matrix :2------------\n");		
 	int b[p][q];

	
	for(i=0;i<p;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		printf("Enter Second Matrix Elements: ");
			 scanf("%d",&b[i][j]);
	 		
		 }
	 }
	 printf("Second Matrix Elements Are:\n");
	 for(i=0;i<p;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		printf("%d\t",b[i][j]);
			 
	 		
		 }printf("\n");
	 }
	 
	int result[m][q];
	 
	 printf("\nMultipication is :\n");
	 
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		result[i][j] =0;
	 		for(k=0;k<n;k++)
	 		{
	 			result[i][j] += a[i][k]*b[k][j];
			 }
		 }
	 }
	 for(i=0;i<m;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		printf("%d\t",result[i][j]);
		 }printf("\n");
	 }
}
		
		 

}
