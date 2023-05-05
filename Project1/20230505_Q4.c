#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q5. p.315 실전 예제 - 길이가 가장 긴 단어 찾기
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

	printf("가장 긴 단어의 길이 : %d\n", max);


	return 0;
}