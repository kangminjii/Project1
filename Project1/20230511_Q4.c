#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

/*
Q4. ����ڷκ��� ���ڿ��� �Է� �޾Ƽ� �ܾ ������ ����ϴ� ���α׷��� �ۼ��϶�.
	("Quit"�� �Էµ� ������ �ݺ��ǵ��� �Ѵ�.)
	�Է� > I am happy
	��� > happy am I
	(�޸� �Ҵ�, ���� ���� ����)
*/

int main()
{
	
	while (1)
	{
		// ���� ����
		char input[100] = "";
		int index = 0; // �����϶��� index ���� space �����Ϳ� ����

		// �Է�
		printf("�Է� > ");
		gets(input);
		int length = strlen(input);

		// ���� ����
		if (strcmp(input, "Quit") == 0)
		{
			printf("=========����=========\n");
			break;
		}

		// �޸� �Ҵ�
		int* space = (int*)malloc(length * 3);
		// �޸� �Ҵ� ���� �˸�
		if (space == NULL)		exit(1);

		// �Է� ���� ���ڿ��� �ڿ��� ���� �˻�
		for (int i = length; i >= 0; i--)
		{
			if (input[i] == ' ' || input[i] == '\0')
			{
				space[index] = i;
				index++;
			}
		}

		// ���
		printf("��� > ");

		space[index] = -1;	// �������� �Է�[0] �κ��� �б� ���� ����

		for (int i = 0; i < index; i++)
		{
			for (int j = space[i + 1] + 1; j < space[i]; j++)
			{
				printf("%c", input[j]);
			}
			printf(" ");
		}
		printf("\n\n");

		free(space);
	}
	


	return 0;
}