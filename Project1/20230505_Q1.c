#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

/*
Q1. ������ ���� �̵� ����� �����ͷ� �ٲ㼭 ���ۼ��ض�
*/
int main()
{
	char str1[100];
	//char* pointer = str1;
	int count = 0;

	gets(str1);

	for (int i = 0; i < 100; i++)
	{
		if (*(str1 + i) == '\0')	break;
		count++;
	}

	while (1)
	{
		system("cls"); // �ܼ�â �����
		printf("%s", str1);  // ���� ���
		Sleep(200);   // 0.2�� ���

		char temp = *str1;

		for (int i = 0; i < count; i++)
		{
			*(str1 + i) = *(str1 + i + 1);
		}

		*(str1 + count - 1) = temp;
	}


	return 0;
}