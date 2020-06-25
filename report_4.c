#include<stdio.h>

int arradd(int* parr, int n);

int main(void)
{
	int arr[10]={1,2,3,4,5};
	int sumofarr;
	sumofarr=arradd(arr, sizeof(arr)/sizeof(int));
	printf("¹è¿­ÀÇ ÃÑÇÕ: %d", sumofarr);
	
	return 0;
}

int arradd(int* parr, int n)
{
	int sum=0;
	int i;
	for(i=0; i<n; i++)
		sum+=parr[i];
	return sum;
}
