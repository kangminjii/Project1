#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
// #1 자료형 종류
	unsigned char	alphabet;
	unsigned int	year, month;
	float	pi;
	double  doublePI;

	alphabet = 'a';  // "" 문자열로 사용시 ?가 출력됨
	year = 2023;
	pi = 3.14f;
	doublePI = 3.14f;
	month = 4;
	year = month;

	/*printf("alphabet = %c\n", alphabet);
	printf("year = %d\n", year);
	printf("pi = %.2f\n", pi);
	printf("doublePI = %.1f\n", doublePI);*/


// #2 문자
	char ch1 = 'A';
	char ch2 = 65;

	/*printf("문자 %c의 아스키 코드 값 = %d\n", ch1, ch1);
	printf("아스키 코드 값이 %d인 문자 = %c\n", ch2, ch2);*/


// #3 양수
	unsigned int a;

	a = 4294967295;
	//printf("%d\n", a);  // -1 --> %d는 부호 있이 반환
	a = -1;
	//printf("%u\n", a);  // 4294967295 --> %u는 부호 없이 반환


// #4 실수형
	float ft = 1.234567890123456789f;  // warning 메시지 없애려면 f를 붙인다
	double db = 1.234567890123456789;

	//printf("ft = %.20f\n", ft); // 소수점 7개까지 출력
	//printf("db = %.20f\n", db); // 소수점 15개까지 출력

	float aaa = 0.1f;
	float answer = aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa + aaa;
	//printf("aaa를 10번 더하면? \n%.7f", answer); 
	// 1.0000001
	// --> float형을 사용할 때 =를 쓰지 않고 범위로 표시한다


// #5 문자열
	char name[128]; // 문자열은 끝에 널문자(\0)를 자동으로 추가한다
	// name = "gil" --> 대입 불가
	strcpy(name, "gil"); // 또 다른 방법 strcpy_s(name, 128, "hong")

	//printf("name = %s\n", name);

	
// #6 상수
	const double tax_rate = 0.12; // const는 선언과 초기화를 동시에 진행한다
	//printf("tax_rate = %.3f", tax_rate);


// #7 pg.72 연습문제
	int kor = 70;
	int eng = 80;
	int mat = 90;

	int tot = kor + eng + mat;
	//printf("국어 : %d, 영어 : %d, 수학 : %d\n", kor, eng, mat);
	//printf("총점 : %d", tot);


// #8 데이터 입력
	int age;
	float height;
	//printf("나이와 키를 입력하시오 : ");
	//scanf("%d%f", &age, &height);  // scanf는 반환값이 있다
	//printf("나이는 %d, 키는 %.1f입니다.\n", age, height);
	

// #9 문자열 입력
	char name2[128];
	printf("이름을 입력하시오 : ");
	scanf("%s", name);
	printf("이름은 %s입니다.\n", name);







	return 0;
}