#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

/*
Q3. ���ڿ��� �Է� �޾Ƽ� ������ ���ڿ��� �귯������ ��µǴ� ���¿� ���� 
	���ڿ��� ��µǵ��� ���α׷��� �ۼ��϶�.
	ex) hello
	hello
	ello h
	llo he
	lo hel
	o hell
	 hello

	 ȭ�� ����� & ��� ��� ���
*/

int main()
{
	char str1[100];
	char str2[100];
	int count = 0;

	gets(str1);

	for (int i = 0; i < 100; i++)
	{
		if (str1[i] == '\0')	break;
		count++;
	}

	strcpy(str2, str1);

	while (1)
	{
		system("cls"); // �ܼ�â �����
		printf("%s", str2);  // ���� ���
		Sleep(500);   // 0.5�� ���

		char temp = str2[0];
		
		for (int i = 0; i < count; i++)
		{
			str2[i] = str2[i + 1];
		}

		str2[count - 1] = temp;
	}
	

	return 0;
}