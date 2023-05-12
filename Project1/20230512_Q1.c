#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
Q1. p.474 소수 계산 프로그램
	반복 실행 가능 하도록 한다.
*/

int main()
{
	int input = 0;
	int count = 1;

	while (1)
	{
		// 반복 실행
		printf("> 양수 입력(0 입력시 종료) : ");
		scanf("%d", &input);
		int i = 2;

		// 반복 탈출
		if (input == 0)
		{
			printf("\n=====종료=====\n");
			break;
		}

		// 메모리 할당
		int* prime = (int*)malloc(sizeof(int) * input);

		// 메모리 할당 실패 알림
		if (prime == NULL)
		{
			exit(1);
		}

		// 소수 판별
		while (i <= input)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					count++;
					break;
				}
			}

			if (count == 1)	prime[i - 2] = i;
			else			prime[i - 2] = 0;
			
			count = 1;
			i++;
		}

		// 출력
		for (int i = 2; i < input; i++)
		{
			if ((i - 2) % 5 == 0)	printf("\n");

			if (prime[i - 2] == 0)	printf("    X");
			else					printf("%5d", prime[i - 2]);
		}
		printf("\n\n");

		free(prime);
	}


	return 0;
}