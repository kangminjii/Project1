#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q5. p.315 ���� ���� - ���̰� ���� �� �ܾ� ã��
*/



int main()
{
	int	max = 0, count = 0, res = 0;
	char ch;

	while (res != -1)
	{
		res = scanf("%c", &ch);

		if (ch == '\n')
		{
			if (count > max)
			{
				max = count;
				count = 0;
				ch = getchar();
			}
		}
		else count++;

		res = getchar();
	}

	printf("���� �� �ܾ��� ���� : %d\n", max);


	return 0;
}