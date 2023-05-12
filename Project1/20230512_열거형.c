#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

enum season {SPRING= 6, SUMMER, FALL, WINTER};

int main()
{
	enum season ss = SPRING;
	char* pc = NULL;

	switch (ss)
	{
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "swimming";
		break;
	case FALL:
		pc = "trip";
		break;
	case WINTER:
		pc = "skiing";
		break;
	}
	printf("나의 레저 활동 => %s\n", pc);



	return 0;
}