#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// main �Լ��� ����� �μ� ���
int main(int argc, char** argv) // argc = �ܺ� �ɼ� ����, argv = �ɼǿ� ���� ���ڿ�
{
	for (int i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	// cmd â���� Ȯ������

	return 0;
}