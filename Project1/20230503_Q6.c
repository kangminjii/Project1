#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
Q6. 달팽이 한 마리가 1달이 지나면 어른이 되고, 다시 1달이 지나면 새끼를 낳는다.
	새로 태어난 달팽이 역시 1달이 지나면 어른이 되고, 다시 1달 후부터 새끼를 낳는다고 할 때,
	달팽이가 매달 새끼를 낳으면 1년 후 전체 달팽이의 수는 얼마인지 알 수 있도록 프로그램을 작성하라.
	(가정1. 달팽이는 자웅동체이다.
	 가정2. 달팽이는 1년만에 죽을리는 없다.)
*/

int snail(int month);

int main()
{
	printf("1년(12달) 후 전체 달팽이의 수 : %d", snail(12));

	return 0;
}

int snail(int month)
{
	if (month == 1)	return 1;
	else if (month == 2)	return 2;

	return snail(month - 1) + snail(month - 2);
}