#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q4. p.292. ���� ����
	input_nums�� print_nums �Լ��� �迭�� ũ�⸦ �� �� �ֵ��� �������� �Ű������� �߰��ϵ��� �ϰ�,
	�� �Լ��� �ڵ带 �ϼ��ؼ� ���� ����� ���� ��µǵ��� ���α׷��� �ۼ��϶�.
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
		printf("��ȣ �Է� : ");
		scanf("%d", lotto_nums + i);
		
		for (int j = 0; j < i; j++)
		{
			if (lotto_nums[i] == lotto_nums[j])
			{
				printf("���� ��ȣ�� �ֽ��ϴ�!\n");
				i--;
				break;
			}
		}
	}
}

void print_nums(int* lotto_nums, int size)
{
	printf("�ζ� ��ȣ : ");

	for (int i = 0; i < size; i++)
	{
		printf("%3d", lotto_nums[i]);
	}
}