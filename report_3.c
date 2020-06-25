#include<stdio.h>
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main(void)
{
	int num1= 100, num2 = 30;
	printf("num1:%d num2:%d \n", num1, num2);
	swap(&num1, &num2);
	printf("num1:%d num2:%d", num1, num2);
}
