#include<stdio.h>

int main(){
	int n;
	printf("Enter integer value : ");
	scanf("%d",&n);

	int res=flip_bits(n);
	printf("After flipping adjacent bits is %d ",res);
}

int flip_bits(int num){
	int x=num>>1 & 0x0F0F0F0F; // By num>>1 even bits occupy odd places and now to retain them we AND them with 0000 1111 pattern 
	int y=num<<1 & 0xF0F0F0F0; // By num<<1 odd bits occupy even places and now to retain them we AND them with 1111 0000 pattern 
	x=x|y;
	return x;
}