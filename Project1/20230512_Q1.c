#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
Q1. p.474 �Ҽ� ��� ���α׷�
	�ݺ� ���� ���� �ϵ��� �Ѵ�.
*/

int main()
{
	int input = 0;
	int count = 1;

	while (1)
	{
		// �ݺ� ����
		printf("> ��� �Է�(0 �Է½� ����) : ");
		scanf("%d", &input);
		int i = 2;

		// �ݺ� Ż��
		if (input == 0)
		{
			printf("\n=====����=====\n");
			break;
		}

		// �޸� �Ҵ�
		int* prime = (int*)malloc(sizeof(int) * input);

		// �޸� �Ҵ� ���� �˸�
		if (prime == NULL)
		{
			exit(1);
		}

		// �Ҽ� �Ǻ�
		while (i <= input)
		{
			for (int j = 2; j < i; j++)
			{
				if (i % j == 0)
				{
					count++;
					break;
				}
			}

			if (count == 1)	prime[i - 2] = i;
			else			prime[i - 2] = 0;
			
			count = 1;
			i++;
		}

		// ���
		for (int i = 2; i < input; i++)
		{
			if ((i - 2) % 5 == 0)	printf("\n");

			if (prime[i - 2] == 0)	printf("    X");
			else					printf("%5d", prime[i - 2]);
		}
		printf("\n\n");

		free(prime);
	}


	return 0;
}