#include<stdio.h>

int main(){
	int n,i;
	printf("Enter integer value : ");
	scanf("%d",&n);
	printf("Enter bit to be checked : ");
	scanf("%d",&i);
	int res=check_ith_bit(n,i);
	printf("Bit is %d ",res);
}

int check_ith_bit(int num,int index){
	if(num & (1<<(index-1)))
		return 1;
	else
		return 0;
}