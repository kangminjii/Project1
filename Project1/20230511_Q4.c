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
	char input[100] = "";
	int count = 0;

	printf("�Է� > ");

	int length = sizeof(input) / sizeof(input[0]);

	// �Է�
	for (int i = 0; i < length; i++)
	{
		scanf("%c", &input[i]);
		if (input[i] == '\n')	break;
		count++;
	}

	int index = 0;

	char* space = (char*)calloc(length, sizeof(char));

	for (int i = count; i >= 0; i--)
	{
		int index = 0;

		if (input[i] == ' ')
		{
			index = i;
			*space = &input[i + 1];
			input[i] = '\0';
			space++;
		}

		
	}

	printf("��� > ");
	int i = index;

	while (i != 0)
	{
		for (int i = index; i < length; i++)
		{
			printf("%c", input[i]);
			if (input[i] == '\0')	break;
		}
	}
	
	
	
	

	free(space);


	return 0;
}