#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q2. 배열에 숫자를 다음과 같은 방법으로 채워지도록 프로그램을 작성하라.
	시계 방향으로 M X M의 2차원 배열에 숫자가 채워지도록 한다.

	ex) M -> 3
		1 2 3
		8 9 4
		7 6 5
*/


int main()
{
	int array[10][10];
	int M = 0;

	printf("M의 값을 입력하시오 : ");
	scanf("%d", &M);

	int i = 0, j = 0;
	int count = 1;

	for (int k = 0; k <= M / 2 - 1; k++)
	{
		for (int j = k; j < M - 1 - k; j++) // right
		{
			array[k][j] = count;
			count++;
		}

		for (int i = k; i < M - 1 - k; i++) // down
		{
			array[i][M - 1 - k] = count;
			count++;
		}

		for (int j = M - 1 - k; j > k; j--) // left
		{
			array[M - 1 - k][j] = count;
			count++;
		}

		for (int i = M - 1 - k; i > k; i--) // up
		{
			if ((k == M / 2) && (M % 2 == 0))	break;
			
			array[i][k] = count;
			count++;
		}
	}
		
	if (M % 2 == 1)
	{
		array[M / 2][M / 2] = count; // middle
	}

	
	printf("\n");

	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < M; j++)
		{
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}
	


	return 0;
}