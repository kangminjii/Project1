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


// #6 연습문제
/*
Q1. 사용자로부터 정수 3개를 입력 받아 각 a,b,c에 저장을 하고 조건연산자를 이용하여 
	이 변수들 중에 가장 큰 값을 구해 출력하는 프로그램을 작성하라.
*/
	
	/*int a, b, c, res;

	printf("정수 3개를 입력하시오 : ");
	scanf("%d %d %d", &a, &b, &c);
	
	res = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

	printf("이 변수들 중 가장 큰 값은 : %d\n", res);*/


// #7 비트 연산자

	//int a = 10, b = 12;
	//
	//printf("a & b : %d\n", a & b); // 8
	//printf("a ^ b : %d\n", a ^ b); // 6
	//printf("a | b : %d\n", a | b); // 14
	//printf("~a : %d\n", ~a); // -11
	//printf("a << 1 : %d\n", a << 1); // 20
	//printf("a >> 2 : %d\n", a >> 2); // 2


// #8 조건문 if

	/*int a = 0, b = 0;

	if (a > 0)
	{
		b = 1;
	}
	else if (a == 0)
	{
		b = 2;
	}
	else
	{
		b = 3;
	}
	
	printf("b: %d\n", b);*/


// #9 연습문제
/*
Q2. 두 개의 정수를 입력받아 두 수의 차를 출력하는 프로그램을 작성하라.
	단, 무조건 큰 수에서 작은 수를 빼야 한다.
	case1. if~else문을 이용해서 작성
	case2. 조건연산자를 이용해서 작성
*/

	//int a, b, res1, res2;
	//printf("두 개의 정수를 입력해주세요 : ");
	//scanf("%d %d", &a, &b);

	//// case1
	//if (a > b)
	//{
	//	res1 = a - b;
	//	printf("case1의 두 수의 차는 %d입니다.\n", res1);
	//}
	//else
	//{
	//	res1 = b - a;
	//	printf("case1의 두 수의 차는 %d입니다.\n", res1);
	//}

	//// case2
	//res2 = (a > b) ? (a - b) : (b - a);
	//printf("case2의 두 수의 차는 %d입니다.\n", res2);


// #10 조건문 switch
	
	//int rank = 1, m = 0;

	//switch (rank)
	//{
	//case 1:
	//	m = 300;
	//	break;
	//case 2:
	//	m = 200;
	//	break;
	//case 3:
	//	m = 100;
	//	break;
	//default:
	//	m = 10;
	//	break;
	//}

	//printf("변경된 m의 값은 %d\n", m);


// #11 연습문제
/*
Q3. 학생이 전체 평균 점수에 대한 학점을 출력하는 프로그램을 작성하라.
	성적이 90점 이상 A, 성적이 80점 이상 B, 성적이 70점 이상 C, 성적이 60점 이상 D, 그 미만은 F로 처리한다.
	
	프로그램 실행시 국어, 영어, 수학의 점수를 입력받는다.
	그 평균을 구하고, 위 평가기준을 참고하여 적절한 학점을 출력하라.
*/

	/*int kor, eng, math, ave;
	
	printf("차례대로 국어, 영어, 수학 점수를 입력하시오 : ");
	scanf("%d %d %d", &kor, &eng, &math);

	ave = (kor + eng + math) / 3;

	if (ave >= 90)
	{
		printf("평균 학점은 A입니다.\n");
	}
	else if (80 <= ave && ave < 90)   // ☆☆현재 조건문에서 &&연산자는 비효율적임
	{
		printf("평균 학점은 B입니다.\n");
	}
	else if (70 <= ave && ave < 80)
	{
		printf("평균 학점은 C입니다.\n");
	}
	else if (60 <= ave && ave < 70)
	{
		printf("평균 학점은 D입니다.\n");
	}
	else
	{
		printf("평균 학점은 F입니다.\n");
	}*/


// #12 반복문 while

	/*int a = 1;

	while (a < 10)
	{
		printf("a = %d\n", a);
		a *= 2;
	}
	*/

// #13 반복문 for

	// int a = 1; // for문 ( )안의 동작들 위치
	//for (int a = 1; a < 10; a *= 2)
	//{
	//	printf("%d\n", a);
	//	// a *= 2; // for문 ( )안의 동작들 위치
	//}


// #14
/*
Q4. Factorial 계산, 어떤 양의 정수 n을 입력 받아서 n!을 구하는 프로그램을 작성하시오.
*/

	/*int a;
	int res = 1;
	
	printf("양의 정수를 입력해주세요 : ");
	scanf("%d", &a);

	for (int i = a; i > 0; i--)
	{
		res *= i;
	}

	printf("%d! 값은 %d입니다.\n", a, res);*/


// #15
/*
Q5. 두 수를 입력 받아 두 수 사이에 존재하는 정수의 합을 구하는 프로그램 작성
*/
	
	/*int a, b, res = 0;

	printf("두 수를 입력해 주세요 : ");	
	scanf("%d %d", &a, &b);

	if (a > b)
	{
		for (int i = b; i <= a; i++)
		{
			res += i;
		}
	}
	else
	{
		for (int i = a; i <= b; i++)
		{
			res += i;
		}
	}

	printf("두 수 사이에 존재하는 정수의 합은 %d 입니다.\n", res);*/


// #16
/*
Q6. 사용자로부터 양의 정수 M과 N을 입력 받아 N개 만큼 M의 배수를 출력하는 프로그램을 작성하라.
	ex) 3 4
	=> 3 6 9 12
*/

	unsigned int M, N, res;

	printf("양의 정수 M과 N을 입력해주세요 : ");
	scanf("%d %d", &M, &N);

	res = M;
	for (int i = 0; i < N; i++)
	{
		printf("%d ", res);
		res += M;
	}



	return 0;
}