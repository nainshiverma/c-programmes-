#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter no of ros and columns");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	   for(j=1;j<=2i-1;j++)
		{
			if(j>=2i-1&&j<=2i+1)
			printf("*");
			else
			printf(" ");
			}
		printf("\n");
	}
	return 0;
}
