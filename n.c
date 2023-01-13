#include<stdio.h>
int main(){
	int a[5],i,n=0;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
		if(a[i]<0)
		n++;
	}
	printf("%d",n);
	return 0;
}
