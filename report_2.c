#include<stdio.h>
int JustInt(int i);

int main()
{
	int result;
	printf("정수 입력:");
	scanf("%d", &result);
	
	JustInt(result);
	
	printf("입력한 숫자는 %d입니다.", result);
	
	return 0;
}

int JustInt(int i)
{
	return i;
}
