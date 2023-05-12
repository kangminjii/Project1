#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main()
{
	//int* pi = (int*)malloc(sizeof(int));
	//memset(pi, 0, sizeof(int)); // memset: �޸� 0���� �ʱ�ȭ

	int* pi;
	int size = 5;
	int count = 0;
	int num;


	pi = (int*)calloc(size, sizeof(int)); // calloc: �Ҵ�� �ʱ�ȭ�� ���ÿ� ����, 0���� �ʱ�ȭ����

	while (1)
	{
		printf("����� �Է��ϼ��� => ");
		scanf("%d", &num);
		if (num <= 0)	break;
		if (count == size) 
		{
			size += 5; // 5���� �Է��� �ʰ����� �� ������ �ø���
			pi = (int*)realloc(pi, size * sizeof(int)); // realloc: ���� Ȯ���ϰ�, ���� ������ �ҷ�����, ���ʿ� ������ ���� �߰�
		}
		pi[count++] = num;
	}

	for (int i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}




	if (pi == NULL)
	{
		printf("�޸� �Ҵ� ����\n");
		exit(1);
	}

	free(pi);  // �޸� �Ҵ� ����

	return 0;
}