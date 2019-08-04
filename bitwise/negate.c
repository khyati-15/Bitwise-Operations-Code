//negate used bits only

#include<stdio.h>

int main(){
	int n;
	printf("Enter integer value : ");
	scanf("%d",&n);
	
	
	int res=find_msb(n);
	n=(~n) & ~(-1 << res);
	printf("%d",n);
}

int find_msb(int num){
	for(int i=31;i>=0;i--){
		if(num & (1<<(i)))
		   {
			return i+1;
		}
	}
		return 0;
}