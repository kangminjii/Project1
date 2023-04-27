#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
// #1 자료형 종류
// 
	//unsigned char	alphabet;
	//unsigned int	year, month;
	//float	pi;
	//double  doublePI;

	//alphabet = 'a';  // "" 문자열로 사용시 ?가 출력됨
	//year = 2023;
	//pi = 3.14f;
	//doublePI = 3.14f;
	//month = 4;
	//year = month;

	//printf("alphabet = %c\n", alphabet);
	//printf("year = %d\n", year);
	//printf("pi = %.2f\n", pi);
	//printf("doublePI = %.1f\n", doublePI);


// #2 문자

	/*char ch1 = 'A';
	char ch2 = 65;

	printf("문자 %c의 아스키 코드 값 = %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자 = %c\n", ch2, ch2);*/


// #3 양수
// 
	//unsigned int ua;

	//ua = 4294967295;
	//printf("%d\n", ua);  // -1 --> %d는 부호 있이 반환
	//ua = -1;
	//printf("%u\n", ua);  // 4294967295 --> %u는 부호 없이 반환


// #4 실수형
// 
	//float ft = 1.234567890123456789f;  // warning 메시지 없애려면 f를 붙인다
	//double db = 1.234567890123456789;

	//printf("ft = %.20f\n", ft); // 소수점 7개까지 출력
	//printf("db = %.20f\n", db); // 소수점 15개까지 출력

	//float aaa = 0.1f;
	//float answer = aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa;
	//printf("aaa를 10번 더하면? \n%.7f", answer); 
	//// 1.0000001
	//// --> float형을 사용할 때 =를 쓰지 않고 범위로 표시한다


// #5 문자열
// 
	//char name[128]; // 문자열은 끝에 널문자(\0)를 자동으로 추가한다
	//// name = "gil" --> 대입 불가
	//strcpy(name, "gil"); // 또 다른 방법 strcpy_s(name, 128, "hong")

	//printf("name = %s\n", name);


// #6 상수
// 
	//const double tax_rate = 0.12; // const는 선언과 초기화를 동시에 진행한다
	//printf("tax_rate = %.3f", tax_rate);


// #7 pg.72 연습문제

	/*int kor = 70;
	int eng = 80;
	int mat = 90;

	int tot = kor + eng + mat;
	printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
	printf("총점 : %d", tot);*/


// #8 데이터 입력
// 
	//int age;
	//float height;
	//printf("나이와 키를 입력하시오 : ");
	//scanf("%d%f", &age, &height);  // scanf는 반환값이 있다
	//printf("나이는 %d, 키는 %.1f입니다.\n", age, height);


// #9 문자열 입력
// 
	//char grade;
	//char name[128];
	//printf("학점과 이름을 입력하시오 : ");
	//scanf("%c%s", &grade, name);
	//printf("%s의 학점은 %c입니다.\n", name, grade);


// #10 산술 연산자
// 
	//int a1 = 5.0 / 2; // 타입이 다른 것 끼리 연산하지 마라, 원하는 값이 안나올 수도 있다
	//int a2 = 5 / 2.0;

	//double b1 = 5.0 / 2;
	//double b2 = 5 / 2.0;

	//printf("a1의 표현: %d, %f\n", a1, a1);
	//printf("a2의 표현: %d, %f\n", a2, a2);
	//printf("b1의 표현: %f, %d\n", b1, b1);
	//printf("b2의 표현: %f, %d\n", b2, b2);


// #11 증감 연산자
// 
	//int A = 5, B = 5;
	//int pre, post;

	//printf("초깃값 A = %d, B = %d\n", A, B);

	//pre = (++A) * 3;
	//post = (B++) * 3;

	//printf("현재값 A = %d, B = %d\n", A, B);
	//printf("전위형 pre값 = %d, 후위형 post값 = %d\n", pre, post);


// #12 관계 연산자

	/*int a = 10, b = 20;
	int res;

	res = a > b;
	printf("a > b  : %d\n", res);
	res = a >= b;
	printf("a >= b : %d\n", res);
	res = a < b;
	printf("a < b  : %d\n", res);
	res = a <= b;
	printf("a <= b : %d\n", res);
	res = a == b;
	printf("a == b : %d\n", res);
	res = a != b;
	printf("a != b : %d\n", res);*/


// #13 pg.97 연습문제

	/*double a = 4.0, b = 1.2;

	printf("%.1f + %.1f = %.1f\n", a, b, a + b);
	printf("%.1f - %.1f = %.1f\n", a, b, a - b);
	printf("%.1f * %.1f = %.1f\n", a, b, a * b);
	printf("%.1f / %.1f = %.1f\n", a, b, a / b);


	int math, english;
	double average;

	printf("두 과목의 점수 : ");
	scanf("%d %d", &math, &english);
	average = (math + english) / 2.0;

	printf("두 과목의 평균 : %.1f\n", average);


	int kor = 3, eng = 5, mat = 4;
	int credits = 0;
	int res = 0;

	double kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grade = 0;

	credits = kor + eng + mat;
	grade = kscore + escore + mscore / 3;
	res = (credits >= 10) && (grade > 4.0);
	printf("결과는 %d\n", res);*/


// #14 과제
	
	int N = 0;
	int M = 0;

	printf("몇년간 담배를 피셨나요? ");
	scanf("%d", &N);
	printf("하루에 몇개피씩 피셨나요? ");
	scanf("%d", &M);

	int nminute = 220 * (N * 365 * M); // 단축된 수명(분)
	int nhour = nminute / 60;
	int nday = nhour / 24;
	int nyear = nday / 365;
	
	int year1 = nyear % 365; // 단축된 수명(년)
	int day1 = nday % 365; // 단축된 수명(일)
	int hour1 = nhour % 24; // 단축된 수명(시간)
	int minute1 = nminute % 60; // 단축된 수명(분)


	printf("줄어든 수명 : %d년 %d일 %.d시 %d분\n", year1, day1, hour1, minute1);


	int Nminute = 100 * 365 * 24 * 60 - 220 * (N * 365 * M); // 기대 수명(분)
	int Nhour = Nminute / 60;
	int Nday = Nhour / 24;
	int Nyear = Nday / 365;

	int year2 = Nyear % 365; // 기대 수명(년)
	int day2 = Nday % 365; // 기대 수명(일)
	int hour2 = Nhour % 24; // 기대 수명(시간)
	int minute2 = Nminute % 60; // 기대 수명(분)


	printf("기대 수명 : %d살 %d일 %d시 %d분\n", year2, day2, hour2, minute2);


	return 0;
}