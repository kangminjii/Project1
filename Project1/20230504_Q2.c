#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q2. p.232 ���� ����
	1. �ҹ��ڸ� �빮�ڷ� ��ȯ
	2. �빮�ڸ� �ҹ��ڷ� ��ȯ
*/

int main()
{
	char str[100];
	int count1 = 0, count2 = 0;

	puts("case 1 ���� �Է� : ");
	gets(str);	// gets �Լ��� ��ĭ�� �����Ͽ� �� �� ��ü�� ���ڿ��� �Է��Ѵ�

	int size = sizeof(str) / sizeof(str[0]);

	// case1. �ҹ��� -> �빮��
	for (int i = 0; i < size; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
			count1++;
		}
	}

	printf("�ٲ� ���� : %s\n", str);
	printf("�ٲ� ���� �� : %d\n", count1);


	puts("case 2 ���� �Է� : ");
	gets(str);

	// case2. �빮�� -> �ҹ���
	for (int i = 0; i < size; i++)
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
			count2++;
		}
	}

	printf("�ٲ� ���� : %s\n", str);
	printf("�ٲ� ���� �� : %d\n", count2);
	

	return 0;
}