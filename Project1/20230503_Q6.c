#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
Q6. ������ �� ������ 1���� ������ ��� �ǰ�, �ٽ� 1���� ������ ������ ���´�.
	���� �¾ ������ ���� 1���� ������ ��� �ǰ�, �ٽ� 1�� �ĺ��� ������ ���´ٰ� �� ��,
	�����̰� �Ŵ� ������ ������ 1�� �� ��ü �������� ���� ������ �� �� �ֵ��� ���α׷��� �ۼ��϶�.
	(����1. �����̴� �ڿ���ü�̴�.
	 ����2. �����̴� 1�⸸�� �������� ����.)
*/

int snail(int month);

int main()
{
	printf("1��(12��) �� ��ü �������� �� : %d", snail(12));

	return 0;
}

int snail(int month)
{
	if (month == 1)	return 1;
	else if (month == 2)	return 2;

	return snail(month - 1) + snail(month - 2);
}