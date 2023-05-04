#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
Q4. 입력 받은 값의 절대값을 구하는 함수 abs()를 구현하라.
	ex) 
	종료하려면 0을 입력 하시오.
	정수 입력 : -34
	절대값은 : 34
*/

int abs(int number);

int main()
{
	int number;

	while (1)
	{
		printf("종료하려면 0을 입력하시오.\n");
		printf("정수 입력 : ");
		scanf("%d", &number);
		
		if (number == 0)	break;

		printf("절대값은 : %d\n", abs(number));
	}

	return 0;
}

int abs(int number)
{
	if (number < 0)	return number *= -1; // number *= -1 보다 바로 return해주는 것이 runtime이 최적화됨

	return number;
}