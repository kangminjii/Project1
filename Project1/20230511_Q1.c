#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
Q1. 야구게임
	3 개의 숫자를 입력 받아서 다음과 같이 숫자가 있지만,
	그 위치가 틀렸을 때는 "ball"을 출력하고,
	숫자와 위치가 맞으면 "strike"을 출력한다.
	숫자의 위치가 전부 틀리면 "out"을 출력하는 프로그램을 작성하라.
	무엇이 볼이고 스트라이크 인지는 출력하지 않는다.
	3 개의 숫자와 위치가 다 맞으면 "homerun"으로 표시하고 게임을 끝낸다.

	ex) 컴퓨터 2 1 6 <- 보여지면 안됨
	(1 ~ 9 사이의 값으로 조합되며 중복 되어서는 안된다)
		2 1 6
	1>	8 3 5	=>	OUT
	2>  6 5 9   =>  0S 1B
	3>  2 6 4	=>  1S 1B
	4>  2 1 6   =>	HR

	rand() 사용
*/


int main()
{
	int answer[3] = { 0 };
	int user[3] = { 0 };

	int count = 1;

	srand(time(NULL));

	// 난수 생성
	while (answer[0] == answer[1] || answer[0] == answer[2] || answer[1] == answer[2])
	{
		for (int i = 0; i < 3; i++) 
		{
			answer[i] = rand() % 9 + 1;
			if (answer[i] == answer[i - 1] || answer[i] == answer[i - 2])
			{
				printf("중복된 값이 생성됐습니다. 프로그램을 재실행합니다.\n");
			}
		}
	}
	
	// 야구 게임
	while (1)
	{
		int ball = 0, strike = 0, homerun = 0, out = 0, restart = 0;
		
		// 사용자의 입력 값
		printf("1 ~ 9 사이의 중복되지 않는 수를 입력하시오\n");
		printf("%d>  ", count);

		for(int i = 0; i <3; i++)		scanf("%d", &user[i]);
		for (int i = 0; i < 3; i++)
		{
			// 중복 값 입력 방지
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

		// strike, ball 판단
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

		// 출력 부분

		if (restart == 1)
		{
			printf("중복된 값을 입력했습니다. 다시 입력해주세요.\n");
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