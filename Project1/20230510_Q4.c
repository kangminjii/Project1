#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q4. 다음과 같이 배열에 숫자가 채워지도록 프로그램을 작성하라. 
	(N X N의 경우로만 작성)

	ex) N = 3
		1 2 6
		3 5 7
		4 8 9
*/

int main()
{
	int array[10][10];
	int N = 0;

	printf("N의 값을 입력하시오 : ");
	scanf("%d", &N);

	int row = 0, sum = 0;

	int count = 1;
	
	// (row, col)
	// sum = row + col

	while (sum <= N - 1 + N - 1)	// sum이 마지막 배열 값이 될 때까지
	{
		if (sum % 2 == 1)
		{
			for (int row = 0; row <= sum; row++)
			{
				int col = sum - row;

				if (row >= N || col >= N)	continue;	// sum값이 커짐에 따라 count가 커지는 것을 방지
														// ex) N = 4, array[0][4] = count --> N X N 배열을 초과하는 부분에 count 값이 들어감
				array[row][col] = count;
				count++;
			}
		}
		else
		{
			for (int row = sum; row >= 0; row--)
			{
				int col = sum - row;

				if (row >= N || col >= N)	continue;
				array[row][col] = count;
				count++;
			}
		}

		sum++;
	}

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			printf("%3d", array[i][j]);
		}
		printf("\n");
	}


	return 0;
}