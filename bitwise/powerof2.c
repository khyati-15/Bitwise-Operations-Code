#include<stdio.h>

int main(){
	int n;
	printf("Enter integer value : ");
	scanf("%d",&n);

	int res=poweroftwo(n);
	if(res==1){
		printf("%d is power of 2",n);
	}
	else
		printf("%d is not power of 2",n);
}

int poweroftwo(int num){
	if(n & (n-1))
		return 0;
	else
		return 1;
}