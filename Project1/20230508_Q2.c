#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
Q2. "I am a boy. I'm happy!" 문자열이 있는데
	이 중 boy의 위치주소를 출력하고 boy를 girl로 바꾸어 출력하는 프로그램을 작성하라.

	출력 결과>
		boy 위치 주소 : 0FF2 C400
		바뀐 문자열 : I am a girl. I'm happy!
*/


int main()
{
	char str1[80] = "I am a boy. I'm happy!";
	char front_str1[80], last_str1[80];

	int count = 0;

	// 바꾸고 싶은 단어의 위치
	while (str1[count] != 'b')
	{
		count++;
	}

	printf("boy의 위치 주소 : %p\n", &str1[count]);

	// 바꾸려는 단어의 앞부분
	for (int i = 0; i < count; i++)
	{
		front_str1[i] = str1[i];
	}
	front_str1[count] = '\0';

	// 바꾸려는 단어의 뒷부분
	int j = 0;
	for (int i = count + strlen("boy"); i < strlen(str1); i++)
	{
		last_str1[j] = str1[i];
		j++;
	}
	last_str1[j] = '\0';

	// 원래 문자열 앞부분 + "바꿀 단어" + 원래 문자열 뒷부분
	strcat(front_str1, "girl");
	strcat(front_str1, last_str1);


	printf("바뀐 문자열 : %s\n", front_str1);


	return 0;
}