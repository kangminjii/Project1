#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q1. ���̰� 5�� int�� �迭�� �����ϰ�, ����ڷκ��� 5���� ������ �Է� �޾� ������ ������ ����ϴ� ���α׷��� �ۼ��϶�.
	1. �Է��� ���� �� �ִ밪
	2. �Է��� ���� �� �ּҰ�
	3. �Էµ� �������� ����
*/

int main()
{
	int number[5];
	int count = sizeof(number) / sizeof(number[0]);

	int total = 0;
	
	for (int i = 0; i < count; i++)
	{
		scanf("%d", &number[i]);
	}

	int min = number[0];
	int max = number[0];

	for (int i = 0; i < count; i++)
	{
		total += number[i];

		if (number[i] > max)	max = number[i];

		if (number[i] < min)	min = number[i];
	}
	printf("\n");

	printf("�ִ밪 : %d, �ּҰ� : %d, ���� : %d\n", max, min, total);


	
	return 0;
}