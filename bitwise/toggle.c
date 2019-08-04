//toggle except kth bit

#include<stdio.h>

int main(){
	int n,i;
	printf("Enter integer value : ");
	scanf("%d",&n);
	printf("Enter bit to be checked : ");
	scanf("%d",&i);
	
	int res=~(n ^ (1<<i));
	printf("%d",res);
}

