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
	// ����ü �������� ���
	// struct score yuni;
	// struct score *ps = &yuni;
	// (*ps).kor  == ps->kor

	struct address list[5] = { {" ", 0, " ", " "}};

	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ����ó �Է�\n", i + 1);
		printf("�̸� : ");
		gets(list[i].name);
		printf("���� : ");
		scanf("%d", &list[i].age);
		getchar();
		printf("��ȭ��ȣ : ");
		gets(list[i].tel);
		printf("�ּ� : ");
		gets(list[i].addr);
		printf("\n");
	}

	for (int i = 0; i < 5; i++)
	{
		printf("\n�̸�\t����\t ��ȭ��ȣ\t�ּ�\n");
		printf("%6s %3d %15s %8s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}

	return 0;
}