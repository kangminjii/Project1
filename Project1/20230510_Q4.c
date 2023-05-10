#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q4. ������ ���� �迭�� ���ڰ� ä�������� ���α׷��� �ۼ��϶�. 
	(N X N�� ���θ� �ۼ�)

	ex) N = 3
		1 2 6
		3 5 7
		4 8 9
*/

int main()
{
	int array[10][10];
	int N = 0;

	printf("N�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &N);

	int row = 0, sum = 0;

	int count = 1;
	
	// (row, col)
	// sum = row + col

	while (sum <= N - 1 + N - 1)	// sum�� ������ �迭 ���� �� ������
	{
		if (sum % 2 == 1)
		{
			for (int row = 0; row <= sum; row++)
			{
				int col = sum - row;

				if (row >= N || col >= N)	continue;	// sum���� Ŀ���� ���� count�� Ŀ���� ���� ����
														// ex) N = 4, array[0][4] = count --> N X N �迭�� �ʰ��ϴ� �κп� count ���� ��
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