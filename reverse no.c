#include<stdio.h>
int main(){
	int n,i,r,rev;
	printf("enter no ");
	scanf("%d",&n);
	int reverse=0;
	while(n!=0);
	{
		r=n%10;
		reverse=reverse*10+r;
		n/10;
	}
	printf("reverse no=%d",reverse);
	return 0;
}



