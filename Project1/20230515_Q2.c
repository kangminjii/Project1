#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
Q2. 99.txt 파일을 만들고, 여기에 구구단을 저장하도록 한다.
	그리고 fseek()을 이용해서 원하는 구구단의 내용만을 찾아 출력하는 프로그램을 작성하라.
	ex) 몇 단을 출력? 2
		2단
		==============
		2 x 1 = 2
		.....
		2 x 9 = 18
		==============
*/

void main()
{
	FILE* gugudan;
	int number = 0, size = 0;
	char output[50];
	int res;


	// 구구단 파일 쓰기
	gugudan = fopen("99.txt", "w");
	if (gugudan == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	// 구구단 파일에 구구단 입력
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			fprintf(gugudan, "%3d x %3d = %3d\n", i, j, i * j);
		}
	}
	
	// 원하는 구구단 입력 받기
	printf("몇 단을 출력? ");
	scanf("%d", &number);

	// 구구단 파일 읽기
	gugudan = fopen("99.txt", "r");
	if (gugudan == NULL)
	{
		printf("출력 파일을 열지 못했습니다.\n");
		return 1;
	}

	res = fgets(output, sizeof(output), gugudan);
	size = strlen(output) + 1;
	fseek(gugudan, 9 * size * (number - 2), SEEK_SET);
	// 9는 세로, size는 가로, number - 2는 2단부터 0번째라


	// 출력
	printf("===================\n");
	for (int i = 0; i < 9; i++) // 구구단은 총 9줄
	{
		res = fgets(output, sizeof(output), gugudan);
		printf("%s\n", output);
	}
	printf("===================\n");


	fclose(gugudan);
}