#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
Q7. 사칙연산을 위한 프로그램을 작성하라.
	출력 형태는 다음과 가탇.
	ex)
	원하는 연산을 선태갛시오 : 
	(1: 덧셈, 2: 뺄셈, 3: 곱셈, 4:나눗셈, 0: 종료)
	입력 
	> 1
	> 두 정수를 입력하시오 : 00 00
	> 결과는 00 입니다.
*/

void plus(int a, int b);
void minus(int a, int b);
void multiple(int a, int b);
void divide(int a, int b);

int main()
{
	int number, a, b;

	while (1)
	{
		printf("1: 덧셈, 2: 뺄셈, 3: 곱셈, 4:나눗셈, 0: 종료\n");
		scanf("%d", &number);
		
		if (number == 0)	break;

		printf("두 정수를 입력하시오 : ");
		scanf("%d %d", &a, &b);
		
		switch (number)
		{
			case 1:
				plus(a, b);
				break;
			case 2:
				minus(a, b);
				break;
			case 3:
				multiple(a, b);
				break;
			case 4:
				divide(a, b);
				break;
			default:
				break;
		}
	}
}

void plus(int a, int b)
{
	printf("결과는 %d + %d = %d 입니다.\n\n", a, b, a + b);
}

void minus(int a, int b)
{
	printf("결과는 %d - %d = %d 입니다.\n\n", a, b, a - b);
}

void multiple(int a, int b)
{
	printf("결과는 %d * %d = %d 입니다.\n\n", a, b, a * b);
}

void divide(int a, int b)
{
	printf("결과는 %d / %d = %d 입니다.\n\n", a, b, a / b);
}