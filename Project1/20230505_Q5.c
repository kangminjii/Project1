#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q5. p.315 ���� ���� - ���̰� ���� �� �ܾ� ã��
*/



int main()
{
	int	max = 0, count = 0;
	int ch; // getchar �Լ��� ���� �̿��� ���� ��ȯ�ϱ� ������ int���� ����Ѵ�

	while (1)
	{
		ch = getchar();
		if (ch == -1)	break; // ctrl + z�� ������ �� ����

		if (ch == '\n') // ���͸� ġ�� ������ ���� ���� ����
		{
			if (count > max) // count�� �ִ밪 ����
			{
				max = count;
				count = 0;
			}
		}
		else count++;
	}

	printf("���� �� �ܾ��� ���� : %d\n", max);


	return 0;
}