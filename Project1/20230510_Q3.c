#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q3. p.413 도전 실전 예제
*/


int main()
{
	int array[5][6] = {	{1, 2, 3, 4, 5},
		{6, 7, 8, 9, 10},
		{11, 12, 13, 14, 15},
		{16, 17, 18, 19, 20},
	};

	int sum = 0;

	for (int i = 0; i < 5; i++) // 행의 합
	{
		for (int j = 0; j < 5; j++)
		{
			array[i][5] += array[i][j];

		}
		sum += array[i][5];
	}

	for (int i = 0; i < 5; i++) // 열의 합
	{
		for (int j = 0; j < 4; j++)
		{
			array[4][i] += array[j][i];
		}
	}
	
	array[4][5] = sum; // 1~20까지의 합


	for (int i = 0; i < 5; i++) // 출력
	{
		for (int j = 0; j < 6; j++)
		{
			printf("%4d", array[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}