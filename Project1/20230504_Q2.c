#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q2. p.232 실전 예제
	1. 소문자를 대문자로 변환
	2. 대문자를 소문자로 변환
*/

int main()
{
	char str[100];
	int count1 = 0, count2 = 0;

	puts("case 1 문장 입력 : ");
	gets(str);	// gets 함수는 빈칸을 포함하여 한 줄 전체를 문자열로 입력한다

	int size = sizeof(str) / sizeof(str[0]);

	// case1. 소문자 -> 대문자
	for (int i = 0; i < size; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
			count1++;
		}
	}

	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d\n", count1);


	puts("case 2 문장 입력 : ");
	gets(str);

	// case2. 대문자 -> 소문자
	for (int i = 0; i < size; i++)
	{
		if (str[i] > 64 && str[i] < 91)
		{
			str[i] += 32;
			count2++;
		}
	}

	printf("바뀐 문장 : %s\n", str);
	printf("바뀐 문자 수 : %d\n", count2);
	

	return 0;
}