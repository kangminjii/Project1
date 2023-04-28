#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
// #1 형 변환 연산자

	/*int a = 20, b = 3;
	double res = (double)a / (double)b;
	printf("a = %d, b = %d\n", a, b);  // 6.7
	printf("a/b의 결과 : %.1f\n", res); // 6

	a = (int)res;
	printf("(int) %.1f의 결과 : %d\n", res, a);*/


// #2 자료형 크기 확인

	//printf("%d\n", sizeof(int)); // 4
	//printf("%d\n", sizeof(double)); // 8


// #3 복합대입 연산자

	/*int a = 10, b = 20, res = 2;
	
	a += 20;
	res *= b + 10;
	
	printf("a = %d, b = %d\n", a, b);
	printf("res = %d\n", res);*/


// #4 콤마 연산자

	//int a = 10, b = 20, res;

	//res = (++a, ++b); // 41-42줄과 동일한 표현
	////++a;
	////res = ++b;
	//
	//printf("a:%d, b:%d\n", a, b);
	//printf("res:%d\n", res);
	

// #5 조건 연산자(삼항 연산자)

	/*int a = 10, b = 20;

	printf("큰값: %d\n", (a > b) ? a : b);*/


// #6 Q1.
/*
Q1. 사용자로부터 정수 3개를 입력 받아 각 a,b,c에 저장을 하고 조건연산자를 이용하여 
	이 변수들 중에 가장 큰 값을 구해 출력하는 프로그램을 작성하라.
*/
	int a, b, c, res;

	printf("정수 3개를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);
	
	res = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	printf("이 변수들 중 가장 큰 값은 : %d\n", res);



	return 0;
}