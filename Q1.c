#include<stdio.h>
void main()
{
	int row,col;
	
	printf("enter the array size:");
	scanf("%d",&row);
	printf("enter the array size:");
	scanf("%d",&col);
	
	int i,j,a[row][col],b[row][col],c[row][col],n;
	
	printf("enter the value of array A element:\n");
	 
		for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++){
			
			printf("enter a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
			
			}
		}
		
	printf("enter the value of array B element:\n");
	
	    for(i=0;i<row;i++)
		{
			for(j=0;j<col;j++){ 
				printf("enter b[%d][%d] = ",i,j);
				scanf("%d",&b[i][j]);
			}
		}	
		
		
		printf("the addition , subtraction and multiplication of array is:-\n");
		
		for(i=0;i<row;i++)
		{
				for(j=0;j<col;j++){
			        
					printf("\n addition of %d + %d is:- %d",a[i][j],b[i][j],a[i][j]+b[i][j]);
					printf("\n"); 
					
					printf("\n multiplication of %d * %d is:- %d",a[i][j],b[i][j],a[i][j]*b[i][j]);
					printf("\n");
					   
					printf("\n subtraction of %d - %d is:- %d",a[i][j],b[i][j],a[i][j]-b[i][j]); 
					printf("\n"); 
				}
	    }
	    
    
}
