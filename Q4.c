#include<stdio.h>
void main(){
	
	int i,j,r,c, max, min,same;

	 printf("Enter size of row:- ");
	 scanf("%d",&r);
	 printf("Enter size of column:- ");
	 scanf("%d",&c);
	 
	 	int a[r][c];
	 	
	for(i=0; i<r; i++){
	for(j=0; j<c; j++){
	
		printf("Enter a[%d][%d]:- ",i,j);
		scanf("%d",& a[i][j]);
		}
	}
	max= a[0][0];
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(max<a[i][j]){
				max=a[i][j];
			}
		}
	}

printf("\n maximum number is :- %d",max);
	
	
		min= a[0][0];
	
	for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			if(min>a[i][j]){
				min=a[i][j];
			}
		}
	}

printf("\n  minimum number is :- %d",min);

for(i=0; i<r; i++){
		for(j=0; j<c; j++){
			
				same=a[i][j];
			}
		}
		
		printf("the same number is :-%d",same);
	}	
	

