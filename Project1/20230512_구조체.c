#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 선언하는 순서에 따라 크기의 낭비 여부가 나뉜다
// 데이터 타입이 큰 기준으로 패딩 바이트(메모리 낭비)가 할당됨
struct profile
{
	int age;
	double height;
};

struct Student
{
	struct profile pf;
	int id;
	double grade;
	char* name;  // 포인터를 쓸 때는 유의해야 함
};


int main()
{
	struct Student yuni = { {25, 160.3}, 1219, 4.5, "minji"}; // 초기화

	yuni.pf.age = 17;
	yuni.pf.height = 164.5;
	yuni.id = 315;
	yuni.grade = 4.3;

	yuni.name = (char*)malloc(10);
	printf("이름 입력 : ");
	gets(yuni.name);

	printf("===================\n");
	printf("나이 : %d\n", yuni.pf.age);
	printf("키 : %.1lf\n", yuni.pf.height);
	printf("학번 : %d\n", yuni.id);
	printf("성적 : %.1lf\n", yuni.grade);
	printf("이름 : %s", yuni.name);

	free(yuni.name);



	return 0;
}