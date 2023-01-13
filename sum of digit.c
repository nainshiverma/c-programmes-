#include<stdio.h>
#include<math.h>
int main(){
	int no,copy,sum=0, n=0,re;
	printf("enter no");
	scanf("%d",&no);
	copy=no;
	while(copy>0){
		copy=copy/10;
		n++;
		
	}
	copy=no;
	while(copy!=0){
		re=copy%10;
		sum=sum+pow(re,n);
		copy=copy/10;
	}
	if(no==sum)
	printf("armstrong no");
	else
	printf("not armstrong no");
	return 0;
}
