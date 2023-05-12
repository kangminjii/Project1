#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char temp[80];
	char* str[21] = { 0 }; // 동적 할당 영역을 연결할 포인터 배열
						  // {0}을 통해 초기화함, 이때 0과 NULL은 같은 의미
						  
	// {0}으로 초기화한 것과 같은 의미
	/*for (int i = 0; i < 3; i++)
	{
		str[i] = NULL;
	}*/

	int i = 0;

	while (i < 20)
	{
		str[i] = (char*)malloc(sizeof(char) * 3);
		if (str[i] == NULL)
		{
			// : 메모리 할당 실패 알림
			exit(1); // or break;
		}

		// : str[i]에 문자열 copy
		printf("문자열을 입력하세요 : ");
		gets(temp);
		if (strcmp(temp, "end") == 0)	break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}

	for (int i = 0; str[i] != NULL; i++)
	{
		printf("%s\n", str[i]);
		free(str[i]); // 동적 할당 영역 반환
	}



	return 0;
}