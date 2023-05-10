#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q1. 다음과 같은 A행렬을 B행렬과 같은 형태가 되도록 프로그램을 작성하라.

	A행렬				B행렬
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

	printf("A 행렬의 행 수를 입력해주세요 : ");
	scanf("%d", &row);
	printf("A 행렬을 열 수를 입력해주세요 : ");
	scanf("%d", &col);

	// A 행렬 입력 받기
	printf("A 행렬을 입력해주세요 : \n");
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			scanf("%d", &A[i][j]);
		}
	}

	//// 행과 열을 바꿈
	//for (int i = 0; i < col; i++)
	//{
	//	for (int j = 0; j < row; j++)
	//	{
	//		B[i][j] = A[j][i];
	//	}
	//}

	//// 열의 가운데 기준으로 뒤집음
	//for (int i = 0; i < col; i++)
	//{
	//	for (int j = 0; j < (row / 2); j++)
	//	{
	//		int temp[1][1] = { B[i][j]};
	//		B[i][j] = B[i][row - j - 1];
	//		B[i][row - j - 1] = temp[0][0];
	//	}
	//}

	// 간략화
	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
		{
			B[i][j] = A[row - j - 1][i];
		}
	}

	// B 행렬 출력
	printf("B 행렬 : \n");
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