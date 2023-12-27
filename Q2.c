#include<stdio.h>

void main()
{
	int r,c;
	
	printf("enter the array size:");
	scanf("%d",&r);
	printf("enter the array size:");
	scanf("%d",&c);
	
	int i,j,a[r][c],b[r][c],sum;

	 
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++){
				printf("enter a[%d][%d]",i,j);
				scanf("%d",&a[i][j]);
			}
		}
		
		for(i=0;i<r;i++)
		{
				for(j=0;j<c;j++){
			    sum = sum+a[i][j];
				
				}
	    }
	  	printf("the sum of A and B element is:%d\n",sum);   
    
}
