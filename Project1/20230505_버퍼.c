#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	int num, grade;
	printf("학번 입력 : ");
	scanf("%d", &num); // 숫자 + 엔터를 입력

	// 엔터가 버퍼에 남아 있음
	getchar(); // 버퍼에 남아 있는 개행 문자 제거
			     // 개행 문자 제거를 하지 않는다면 grade는 입력을 받지 않은 상태로 엔터('\n')가 저장됨
	printf("학점 입력 : ");
	grade = getchar(); 
	
	printf("학번 : %d,  학점 : %c", num, grade);

\

	return 0;
}