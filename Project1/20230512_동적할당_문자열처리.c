#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() 
{
	char temp[80];
	char* str[21] = { 0 }; // ���� �Ҵ� ������ ������ ������ �迭
						  // {0}�� ���� �ʱ�ȭ��, �̶� 0�� NULL�� ���� �ǹ�
						  
	// {0}���� �ʱ�ȭ�� �Ͱ� ���� �ǹ�
	/*for (int i = 0; i < 3; i++)
	{
		str[i] = NULL;
	}*/

	int i = 0;

	while (i < 20)
	{
		str[i] = (char*)malloc(sizeof(char) * 3);
		if (str[i] == NULL)
		{
			// : �޸� �Ҵ� ���� �˸�
			exit(1); // or break;
		}

		// : str[i]�� ���ڿ� copy
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp);
		if (strcmp(temp, "end") == 0)	break;
		str[i] = (char*)malloc(strlen(temp) + 1);
		strcpy(str[i], temp);
		i++;
	}

	for (int i = 0; str[i] != NULL; i++)
	{
		printf("%s\n", str[i]);
		free(str[i]); // ���� �Ҵ� ���� ��ȯ
	}



	return 0;
}