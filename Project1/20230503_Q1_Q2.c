#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main()
{
/*
Q1. p.177 ���� ����
*/

	/*int number, count, countS = 0;

	printf("2 �̻��� ������ �Է��ϼ��� : ");
	scanf("%d", &number);

	for (int i = 2; i <= number; i++)
	{
		count = 1;  // 2�̻��� ������ 1�̶�� ����� ���´�

		for (int j = 2; j < i; j++)
		{
			if ((i % j) == 0)  // 1�� �ڱ��ڽ� �̿��� ���� �������� �� ���� �Ҽ��� �ƴϴ�
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
Q2. ���� ���� �����ϴ� ��� A�� Z�� ���ϴ� ���α׷��� �ۼ��϶�.
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
	printf("10 �̸��� ���� n�� �Է��ϼ��� : ");
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