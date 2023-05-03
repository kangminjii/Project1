#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
Q3. p.177의 문제를 입력함수와 출력함수로 구분하여 프로그램을 수정하라.
	1. 입력함수
	   >> 2 이상의 정수를 입력하시오 : 100
	2. 출력함수
	   >> 2 3 5 7 11...
*/

int InputFunc();
void OutputFunc(int number);

int main()
{
	int number = InputFunc();
	OutputFunc(number);

	return 0;
}

int InputFunc()
{
	int n;
	printf("2 이상의 정수를 입력하세요 : ");
	scanf("%d", &n);

	return n;
}

void OutputFunc(int number)
{
	int count, countS = 0;

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
	}
}