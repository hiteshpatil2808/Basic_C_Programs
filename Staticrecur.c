#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("\nEnter the number of elements : ");
	scanf("%d",&n);
	fibbonacci(n);
	return 0;
}

void fibbonacci(int n){
	static int i=0,j=1,k;
	if(n>0)
	{
		k = i + j;
		i = j;
		j = k;
		printf("%d\t",k);
		fibbonacci(n-1);
	}
}
