#include<stdio.h>
int JustInt(int i);

int main()
{
	int result;
	printf("���� �Է�:");
	scanf("%d", &result);
	
	JustInt(result);
	
	printf("�Է��� ���ڴ� %d�Դϴ�.", result);
	
	return 0;
}

int JustInt(int i)
{
	return i;
}
