#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

/*
Q1. 광고판 문자 이동 출력을 포인터로 바꿔서 재작성해라
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
		system("cls"); // 콘솔창 지우기
		printf("%s", str1);  // 문구 출력
		Sleep(200);   // 0.2초 대기

		char temp = *str1;

		for (int i = 0; i < count; i++)
		{
			*(str1 + i) = *(str1 + i + 1);
		}

		*(str1 + count - 1) = temp;
	}


	return 0;
}