#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

/*
Q3. 문자열을 입력 받아서 광고판 문자열이 흘러가듯이 출력되는 형태와 같이 
	문자열이 출력되도록 프로그램을 작성하라.
	ex) hello
	hello
	ello h
	llo he
	lo hel
	o hell
	 hello

	 화면 지우기 & 잠시 대기 기능
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
		system("cls"); // 콘솔창 지우기
		printf("%s", str2);  // 문구 출력
		Sleep(500);   // 0.5초 대기

		char temp = str2[0];
		
		for (int i = 0; i < count; i++)
		{
			str2[i] = str2[i + 1];
		}

		str2[count - 1] = temp;
	}
	

	return 0;
}