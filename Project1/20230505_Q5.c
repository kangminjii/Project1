#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

/*
Q5. p.315 실전 예제 - 길이가 가장 긴 단어 찾기
*/



int main()
{
	int	max = 0, count = 0;
	int ch; // getchar 함수는 문자 이외의 값도 반환하기 때문에 int형을 사용한다

	while (1)
	{
		ch = getchar();
		if (ch == -1)	break; // ctrl + z를 눌렀을 때 종료

		if (ch == '\n') // 엔터를 치기 전까지 글자 수를 센다
		{
			if (count > max) // count에 최대값 저장
			{
				max = count;
				count = 0;
			}
		}
		else count++;
	}

	printf("가장 긴 단어의 길이 : %d\n", max);


	return 0;
}