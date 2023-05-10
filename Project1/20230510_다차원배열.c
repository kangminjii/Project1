#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
// #1 2차원 배열
	
	/*int score[3][4];
	int total;
	double avg;

	for (int i = 0; i < 2; i++)
	{
		printf("4과목의 점수 입력 : ");
		for (int j = 0; j < 1; j++)
		{
			scanf("%d", &score[i][j]);
		}
	}

	for (int i = 0; i < 3; i++)
	{
		total = 0;
		for (int j = 0; j < 4; j++)
		{
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("총점 : %d, 평균 : %.2lf\n", total, avg);
	}*/


// #2 2차원 문자 배열
	
	/*char animal[5][20];
	int count;

	count = sizeof(animal) / sizeof(animal[0]);
	for (int i = 0; i < count; i++)
	{
		scanf("%s", animal[i]);
	}

	for (int i = 0; i < count; i++)
	{
		printf("%s ", animal[i]);
	}*/


// #3 3차원 배열

	int score[2][3][4] = {
		{ {72, 80, 95, 60} , {68, 98, 83, 90} , {75, 72, 84, 90} },
		{ {66, 85, 90, 88} , {95, 92, 88, 95} , {43, 72, 56, 75} }
	};

	for (int i = 0; i < 2; i++)
	{
		printf("%d반 점수 ...\n", i + 1);

		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 4; k++)
			{
				printf("%5d", score[i][j][k]);
			}
			printf("\n");
		}
		printf("\n");
	}









	return 0;
}