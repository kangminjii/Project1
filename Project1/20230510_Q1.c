#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q1. ������ ���� A����� B��İ� ���� ���°� �ǵ��� ���α׷��� �ۼ��϶�.

	A���				B���
	----------------------------
	1 2 3 4				5 1
	5 6 7 8				6 2
			   =>		7 3
						8 4
	----------------------------
	1 2 3				7 4	1
	4 5 6	   =>		8 5 2
	7 8 9				9 6 3

*/


int main()
{
	int A[10][10], B[10][10];
	int row, col;

	printf("A ����� �� ���� �Է����ּ��� : ");
	scanf("%d", &row);
	printf("A ����� �� ���� �Է����ּ��� : ");
	scanf("%d", &col);

	// A ��� �Է� �ޱ�
	printf("A ����� �Է����ּ��� : \n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	//// ��� ���� �ٲ�
	//for (int i = 0; i < col; i++)
	//{
	//	for (int j = 0; j < row; j++)
	//	{
	//		B[i][j] = A[j][i];
	//	}
	//}

	//// ���� ��� �������� ������
	//for (int i = 0; i < col; i++)
	//{
	//	for (int j = 0; j < (row / 2); j++)
	//	{
	//		int temp[1][1] = { B[i][j]};
	//		B[i][j] = B[i][row - j - 1];
	//		B[i][row - j - 1] = temp[0][0];
	//	}
	//}

	// ����ȭ
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			B[i][j] = A[row - j - 1][i];
		}
	}

	// B ��� ���
	printf("B ��� : \n");
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			printf("%d ", B[i][j]);
		}
		printf("\n");
	}



	return 0;
}