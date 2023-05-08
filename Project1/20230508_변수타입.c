#include <stdio.h>

void auto_func();
void static_func();


int main(void)
{
	int i;

	printf("�Ϲ� ���� ����(auto)�� ����� �Լ�...\n");
	for (int i = 0; i < 3; i++)
	{
		auto_func();
	}

	printf("���� ���� ����(static)�� ����� �Լ�...\n");
	for (int i = 0; i < 3; i++)
	{
		static_func();
	}


	return 0;
}

void auto_func()
{
	auto int a = 0;

	a++;
	printf("%d\n", a);
}

void static_func()
{
	static int a = 0;

	a++;
	printf("%d\n", a);
}
