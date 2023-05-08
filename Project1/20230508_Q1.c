#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
Q1. p.353 도전 실전 예제
	대소문자가 섞여 있는 경우도 고려해서 프로그램을 작성할 것
	ex) kiwi, kiWi
*/

void swap(char* pa, char* pb);
void lowerChar(char* string, int length);

int main()
{
	char string1[80], string2[80], string3[80];
	char tempString1[80], tempString2[80], tempString3[80];

	printf("세 단어 입력 : ");

	scanf("%s", string1);
	scanf("%s", string2);
	scanf("%s", string3);

	strcpy(tempString1, string1);
	strcpy(tempString2, string2);
	strcpy(tempString3, string3);


	// 대문자를 소문자로 변경
	lowerChar(string1, strlen(string1));
	lowerChar(string2, strlen(string2));
	lowerChar(string3, strlen(string3));


	// 사전 순서대로 정렬
	while ((strcmp(string1, string2) > 0) || (strcmp(string2, string3) > 0) || (strcmp(string1, string3) > 0))
	{
		if (strcmp(string1, string2) > 0)
		{
			swap(&tempString1, &tempString2);
			swap(&string1, &string2);
		}

		if (strcmp(string2, string3) > 0)
		{
			swap(&tempString2, &tempString3);
			swap(&string2, &string3);
		}
		if (strcmp(string1, string3) > 0)
		{
			swap(&tempString1, &tempString3);
			swap(&string1, &string3);
		}
	}

	// apple, Apple, APple에 대한 정렬은 안됨


	printf("%s, %s, %s", tempString1, tempString2, tempString3);

	return 0;
}

void swap(char* pa, char* pb)
{
	char temp[80];
	strcpy(temp, pa);
	strcpy(pa, pb);
	strcpy(pb, temp);
}

void lowerChar(char* string, int length)
{
	for (int i = 0; i < length; i++)
	{
		if (string[i] >= 65 && string[i] <= 90)
			string[i] += 32;
	}
}