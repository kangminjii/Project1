#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
Q1. �߱�����
	3 ���� ���ڸ� �Է� �޾Ƽ� ������ ���� ���ڰ� ������,
	�� ��ġ�� Ʋ���� ���� "ball"�� ����ϰ�,
	���ڿ� ��ġ�� ������ "strike"�� ����Ѵ�.
	������ ��ġ�� ���� Ʋ���� "out"�� ����ϴ� ���α׷��� �ۼ��϶�.
	������ ���̰� ��Ʈ����ũ ������ ������� �ʴ´�.
	3 ���� ���ڿ� ��ġ�� �� ������ "homerun"���� ǥ���ϰ� ������ ������.

	ex) ��ǻ�� 2 1 6 <- �������� �ȵ�
	(1 ~ 9 ������ ������ ���յǸ� �ߺ� �Ǿ�� �ȵȴ�)
		2 1 6
	1>	8 3 5	=>	OUT
	2>  6 5 9   =>  0S 1B
	3>  2 6 4	=>  1S 1B
	4>  2 1 6   =>	HR

	rand() ���
*/


int main()
{
	int answer[3] = { 0 };
	int user[3] = { 0 };

	int count = 1;

	srand(time(NULL));

	// ���� ����
	while (answer[0] == answer[1] || answer[0] == answer[2] || answer[1] == answer[2])
	{
		for (int i = 0; i < 3; i++) 
		{
			answer[i] = rand() % 9 + 1;
			if (answer[i] == answer[i - 1] || answer[i] == answer[i - 2])
			{
				printf("�ߺ��� ���� �����ƽ��ϴ�. ���α׷��� ������մϴ�.\n");
			}
		}
	}
	
	// �߱� ����
	while (1)
	{
		int ball = 0, strike = 0, homerun = 0, out = 0, restart = 0;
		
		// ������� �Է� ��
		printf("1 ~ 9 ������ �ߺ����� �ʴ� ���� �Է��Ͻÿ�\n");
		printf("%d>  ", count);

		for(int i = 0; i <3; i++)		scanf("%d", &user[i]);
		for (int i = 0; i < 3; i++)
		{
			// �ߺ� �� �Է� ����
			if (i == 1)
			{
				if (user[i] == user[i - 1])
				{
					restart = 1;
					break;
				}
			}
			if (i == 2)
			{
				if (user[i] == user[i - 1] || user[i] == user[i - 2])
				{
					restart = 1;
					break;
				}
			}
		}

		// strike, ball �Ǵ�
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				
				if (answer[i] == user[j])
				{
					if (i == j)	strike++;
					else		ball++;
				}
			}
		}

		// ��� �κ�

		if (restart == 1)
		{
			printf("�ߺ��� ���� �Է��߽��ϴ�. �ٽ� �Է����ּ���.\n");
			continue;
		}
		else if (strike == 3)
		{
			printf("=>  HR\n");
			break;
		}
		else if (strike > 0 || ball > 0)	printf("=>  %dS %dB\n", strike, ball);
		else 								printf("=>  OUT\n");

		count++;

		printf("-------------------\n");
	}

	return 0;
}