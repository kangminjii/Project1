#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q2. �迭�� ���ڸ� ������ ���� ������� ä�������� ���α׷��� �ۼ��϶�.
	�ð� �������� M X M�� 2���� �迭�� ���ڰ� ä�������� �Ѵ�.

	ex) M -> 3
		1 2 3
		8 9 4
		7 6 5
*/


int main()
{
	int array[10][10];
	int M = 0;

	printf("M�� ���� �Է��Ͻÿ� : ");
	scanf("%d", &M);

	int i = 0, j = 0;
	int count = 1;

	for (int rotate = 0; rotate <= M / 2 - 1; rotate++)  // �ð� �������� �� ������ �����̴� �Ÿ��� ������ �ǹ��ϴ� ����
	{
		for (int j = rotate; j < M - 1 - rotate; j++) // right
		{
			array[rotate][j] = count;  // �� ����, �� ++
			count++;
		}

		for (int i = rotate; i < M - 1 - rotate; i++) // down
		{
			array[i][M - 1 - rotate] = count;  // �� ++, �� ����
			count++;
		}

		for (int j = M - 1 - rotate; j > rotate; j--) // left
		{
			array[M - 1 - rotate][j] = count;  // �� ����, �� --
			count++;
		}

		for (int i = M - 1 - rotate; i > rotate; i--) // up
		{
			array[i][rotate] = count;  // �� --, �� ����
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