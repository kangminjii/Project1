#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
Q5.	pg.206 �������� & ���丮�� ����� ����Լ��� �̿��ؼ� �����϶�.
*/ 

int rec_func1(int n);
int rec_func2(int n);

int main()
{
	int n;
	printf("1 �̻��� ���� n�� �Է����ּ��� : ");
	scanf("%d", &n);

	printf("1���� n������ �� : %d\n", rec_func1(n));
	printf("1���� n������ �� : %d", rec_func2(n));

	return 0;
}

int sum1 = 0, sum2 = 1;

int rec_func1(int n)
{
	sum1 += n;
	if (n == 1)	return sum1;
	rec_func1(n - 1);
}

int rec_func2(int n)
{
	sum2 *= n;
	if (n == 1)	return sum2;
	rec_func2(n - 1);
}