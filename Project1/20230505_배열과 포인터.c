#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/* 중요 개념
 
	* (arr + 0) = 10;
	-> arr[0] = 10;

	(arr + 1);
	-> &arr[1];


	int* pa = arr;
	int* pb = pa + 3;

	*pa = 1;
	-> arr[0] = 1;
	*(pa + 1) = 20;
	-> arr[1] = 20;

	pa++; // 다음 배열 요소를 가리킴
*/


void output_ary(int* pa, int size);
void input_ary(int* pa, int size);
double find_max(double* pa, int size);


int main(void)
{
	double ary[5];
	double max;
	int size = sizeof(ary) / sizeof(ary[0]);

	input_ary(ary, size);
	max = find_max(ary, size);
	output_ary(ary, size);

	printf("\n배열의 최댓값 : %.1f\n", max);


	return 0;
}

void output_ary(double* pa, int size)
{
	printf("배열은 : ");
	for (int i = 0; i < size; i++)
	{
		printf("pa[%d] = %.1f ", i, pa[i]);
	}
}

void input_ary(double* pa, int size)
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++)
	{
		scanf("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max;

	max = pa[0];
	for (int i = 1; i < size; i++)
	{
		if (pa[i] > max)	max = pa[i];
	}

	return max;
}
