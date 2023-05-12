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
	char input[100] = "";
	int count = 0;

	printf("입력 > ");

	int length = sizeof(input) / sizeof(input[0]);

	// 입력
	for (int i = 0; i < length; i++)
	{
		scanf("%c", &input[i]);
		if (input[i] == '\n')	break;
		count++;
	}

	int index = 0;

	char* space = (char*)calloc(length, sizeof(char));

	for (int i = count; i >= 0; i--)
	{
		int index = 0;

		if (input[i] == ' ')
		{
			index = i;
			*space = &input[i + 1];
			input[i] = '\0';
			space++;
		}

		
	}

	printf("출력 > ");
	int i = index;

	while (i != 0)
	{
		for (int i = index; i < length; i++)
		{
			printf("%c", input[i]);
			if (input[i] == '\0')	break;
		}
	}
	
	
	
	

	free(space);


	return 0;
}