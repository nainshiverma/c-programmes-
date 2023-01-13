#include<stdio.h>
int main(){
	int i,j,n,m;
	printf("enter n0 of rows");
	scanf("%d",&n);
	printf("enter n0 of columns");
	scanf("%d",&m);
	
	for(i=0;i<n;i++){	
	    for(j=0;j<m;j++){
	    	if(i<=j)
			
	    	printf("%d",i);
	        else
	    	printf(" ");
		}
		printf("\n");
		
	}
	return 0;
}

