#include<stdio.h>
int main()
{
	int i,no,copy,r=0,a;
	printf("enter no");
	scanf("%d",&no);
	no=copy;
		while(copy!=0){
		    copy=copy%10;
			r=(r*10)+copy;
			copy=copy/10;
		   
		}
		if(r==no)
		printf("palinfrome");
		else
		printf("not palindrome");
		
		
		return 0;
}



