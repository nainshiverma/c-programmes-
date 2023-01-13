#include<stdio.h>
int main(){
	int a,r,reverse;
	printf("enter no\n");
	scanf("%d",&a);
	reverse=0;
	while(a!=0){
		r=a%10;
		reverse=(reverse*10)+r;
		a=a/10;
	}
	if(a==reverse)
		printf("palindrome");	
	else
		printf("not palindrome");
	
	return 0;
}
