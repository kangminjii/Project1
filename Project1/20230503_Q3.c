#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
Q3. p.177�� ������ �Է��Լ��� ����Լ��� �����Ͽ� ���α׷��� �����϶�.
	1. �Է��Լ�
	   >> 2 �̻��� ������ �Է��Ͻÿ� : 100
	2. ����Լ�
	   >> 2 3 5 7 11...
*/

int InputFunc();
void OutputFunc(int number);

int main()
{
	int number = InputFunc();
	OutputFunc(number);

	return 0;
}

int InputFunc()
{
	int n;
	printf("2 �̻��� ������ �Է��ϼ��� : ");
	scanf("%d", &n);

	return n;
}

void OutputFunc(int number)
{
	int count, countS = 0;

	for (int i = 2; i <= number; i++)
	{
		count = 1;  // 2�̻��� ������ 1�̶�� ����� ���´�

		for (int j = 2; j < i; j++)  
		{
			if ((i % j) == 0)  // 1�� �ڱ��ڽ� �̿��� ���� �������� �� ���� �Ҽ��� �ƴϴ�
			{
				count = 2;
				break;
			}
		}

		if (count == 1)
		{
			printf("%3d ", i);
			countS++;

			if (countS == 5)
			{
				printf("\n");
				countS = 0;
			}
		}
	}
}