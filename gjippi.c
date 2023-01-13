#include<stdio.h>
int main(){
	int i,a[10],count1=0,count2=0;
	
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			count1=count1+1;
		}else{
			count2=count2+1;
		}
		
	}printf("no of even =%d",count1); 
	printf("no of even =%d",count2); 
	
	return 0;
	
}
