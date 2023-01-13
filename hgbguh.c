#include<stdio.h>
int main(){
	int i,j,n;
	printf("enter no of rows and columns");
	scanf("%d",&n);
	for(i=n;i>=1;i--){
		for(j=1;j<=n;j++){
			if(j==1||i==1||j==i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
