#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter no of rows");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=n;j++){
			if(i<=j)
			printf("%c",i+65 );
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
	
	
}
