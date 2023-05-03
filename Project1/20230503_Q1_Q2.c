#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
/*
Q1. p.177 실전 예제
*/

	/*int number, count, countS = 0;

	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &number);

	for (int i = 2; i <= number; i++)
	{
		count = 1;  // 2이상의 정수는 1이라는 약수를 갖는다

		for (int j = 2; j < i; j++)
		{
			if ((i % j) == 0)  // 1과 자기자신 이외의 수로 나눠지면 그 수는 소수가 아니다
			{
				count = 2;
				break;
			}
		}

		if (count == 1)
		{
			printf("%3d ", i);
			countS++;

			if (countS == 5)
			{
				printf("\n");
				countS = 0;
			}
		}
	}*/


/*
Q2. 다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성하라.
		A Z
	  + Z A
	  ------
	    N N
	
	ex)	n = 9	(A, Z) = (0, 9), (1, 8), (2, 7) ... (9, 0)
		A Z
	  + Z A
	  ------
		9 9
*/

	int n;
	printf("10 미만의 정수 n을 입력하세요 : ");
	scanf("%d", &n);


	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if ((i + j) == n)
			{
				printf("A = %d, Z = %d\n", i, j);
			}
		}
	}


	return 0;
}