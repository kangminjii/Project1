#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q4. p.292. 실전 예제
	input_nums와 print_nums 함수에 배열의 크기를 알 수 있도록 정수형의 매개변수를 추가하도록 하고,
	각 함수의 코드를 완성해서 실행 결과와 같이 출력되도록 프로그램을 작성하라.
*/

void input_nums(int* lotto_nums, int size);
void print_nums(int* lotto_nums, int size);

int main(void)
{
	int lotto_nums[6];
	int size = sizeof(lotto_nums) / sizeof(lotto_nums[0]);

	input_nums(lotto_nums, size);
	print_nums(lotto_nums, size);

	return 0;
}

void input_nums(int* lotto_nums, int size)
{
	for(int i = 0; i < size; i++)
	{
		printf("번호 입력 : ");
		scanf("%d", lotto_nums + i);
		
		for (int j = 0; j < i; j++)
		{
			if (lotto_nums[i] == lotto_nums[j])
			{
				printf("같은 번호가 있습니다!\n");
				i--;
				break;
			}
		}
	}
}

void print_nums(int* lotto_nums, int size)
{
	printf("로또 번호 : ");

	for (int i = 0; i < size; i++)
	{
		printf("%3d", lotto_nums[i]);
	}
}