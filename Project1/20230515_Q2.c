#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
Q2. 99.txt ������ �����, ���⿡ �������� �����ϵ��� �Ѵ�.
	�׸��� fseek()�� �̿��ؼ� ���ϴ� �������� ���븸�� ã�� ����ϴ� ���α׷��� �ۼ��϶�.
	ex) �� ���� ���? 2
		2��
		==============
		2 x 1 = 2
		.....
		2 x 9 = 18
		==============
*/

void main()
{
	FILE* gugudan;
	int number = 0, size = 0;
	char output[50];
	int res;


	// ������ ���� ����
	gugudan = fopen("99.txt", "w");
	if (gugudan == NULL)
	{
		printf("��� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	// ������ ���Ͽ� ������ �Է�
	for (int i = 2; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			fprintf(gugudan, "%3d x %3d = %3d\n", i, j, i * j);
		}
	}
	
	// ���ϴ� ������ �Է� �ޱ�
	printf("�� ���� ���? ");
	scanf("%d", &number);

	// ������ ���� �б�
	gugudan = fopen("99.txt", "r");
	if (gugudan == NULL)
	{
		printf("��� ������ ���� ���߽��ϴ�.\n");
		return 1;
	}

	res = fgets(output, sizeof(output), gugudan);
	size = strlen(output) + 1;
	fseek(gugudan, 9 * size * (number - 2), SEEK_SET);
	// 9�� ����, size�� ����, number - 2�� 2�ܺ��� 0��°��


	// ���
	printf("===================\n");
	for (int i = 0; i < 9; i++) // �������� �� 9��
	{
		res = fgets(output, sizeof(output), gugudan);
		printf("%s\n", output);
	}
	printf("===================\n");


	fclose(gugudan);
}