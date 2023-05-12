#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

int main()
{
	// 구조체 포인터의 사용
	// struct score yuni;
	// struct score *ps = &yuni;
	// (*ps).kor  == ps->kor

	struct address list[5] = { {" ", 0, " ", " "}};

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 연락처 입력\n", i + 1);
		printf("이름 : ");
		gets(list[i].name);
		printf("나이 : ");
		scanf("%d", &list[i].age);
		getchar();
		printf("전화번호 : ");
		gets(list[i].tel);
		printf("주소 : ");
		gets(list[i].addr);
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		printf("\n이름\t나이\t 전화번호\t주소\n");
		printf("%6s %3d %15s %8s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

	return 0;
}