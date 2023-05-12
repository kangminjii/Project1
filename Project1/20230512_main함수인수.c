#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// main 함수의 명령행 인수 사용
int main(int argc, char** argv) // argc = 외부 옵션 개수, argv = 옵션에 대한 문자열
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	// cmd 창에서 확인했음

	return 0;
}