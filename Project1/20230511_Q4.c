#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
Q4. 사용자로부터 문자열을 입력 받아서 단어를 역으로 출력하는 프로그램을 작성하라.
	("Quit"가 입력될 때까지 반복되도록 한다.)
	입력 > I am happy
	출력 > happy am I
	(메모리 할당, 내용 복사 연습)
*/

int main()
{
	
	while (1)
	{
		// 변수 선언
		char input[100] = "";
		int index = 0; // 공백일때의 index 값을 space 포인터에 저장

		// 입력
		printf("입력 > ");
		gets(input);
		int length = strlen(input);

		// 종료 조건
		if (strcmp(input, "Quit") == 0)
		{
			printf("=========종료=========\n");
			break;
		}

		// 메모리 할당
		int* space = (int*)malloc(length * 3);
		// 메모리 할당 실패 알림
		if (space == NULL)		exit(1);

		// 입력 받은 문자열의 뒤에서 부터 검사
		for (int i = length; i >= 0; i--)
		{
			if (input[i] == ' ' || input[i] == '\0')
			{
				space[index] = i;
				index++;
			}
		}

		// 출력
		printf("출력 > ");

		space[index] = -1;	// 마지막에 입력[0] 부분을 읽기 위한 선언

		for (int i = 0; i < index; i++)
		{
			for (int j = space[i + 1] + 1; j < space[i]; j++)
			{
				printf("%c", input[j]);
			}
			printf(" ");
		}
		printf("\n\n");

		free(space);
	}
	


	return 0;
}