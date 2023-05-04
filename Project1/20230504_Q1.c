#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q1. 길이가 5인 int형 배열을 선언하고, 사용자로부터 5개의 정수를 입력 받아 다음의 내용을 출력하는 프로그램을 작성하라.
	1. 입력한 정주 중 최대값
	2. 입력한 정수 중 최소값
	3. 입력된 정수들의 총합
*/

int main()
{
	int number[5];
	int count = sizeof(number) / sizeof(number[0]);

	int total = 0;
	
	for (int i = 0; i < count; i++)
	{
		scanf("%d", &number[i]);
	}

	int min = number[0];
	int max = number[0];

	for (int i = 0; i < count; i++)
	{
		total += number[i];

		if (number[i] > max)	max = number[i];

		if (number[i] < min)	min = number[i];
	}
	printf("\n");

	printf("최대값 : %d, 최소값 : %d, 총합 : %d\n", max, min, total);


	
	return 0;
}