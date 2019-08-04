#include<stdio.h>

int main(){
	int n;
	printf("Enter integer value : ");
	scanf("%d",&n);

	int res=count_used_bits(n);
	printf("Used Bits are %d ",res);
}

int count_used_bits(int num){
	int res=0;
	for(int i=0;i<32;i++){
		if(num & (1<<(i))
		   res=i;
	}
	if(res==0)
		return 0;
	else
		return res+1;
}