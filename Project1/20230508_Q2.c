#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

/*
Q2. "I am a boy. I'm happy!" ���ڿ��� �ִµ�
	�� �� boy�� ��ġ�ּҸ� ����ϰ� boy�� girl�� �ٲپ� ����ϴ� ���α׷��� �ۼ��϶�.

	��� ���>
		boy ��ġ �ּ� : 0FF2 C400
		�ٲ� ���ڿ� : I am a girl. I'm happy!
*/


int main()
{
	char str1[80] = "I am a boy. I'm happy!";
	char front_str1[80], last_str1[80];

	int count = 0;

	// �ٲٰ� ���� �ܾ��� ��ġ
	while (str1[count] != 'b')
	{
		count++;
	}

	printf("boy�� ��ġ �ּ� : %p\n", &str1[count]);

	// �ٲٷ��� �ܾ��� �պκ�
	for (int i = 0; i < count; i++)
	{
		front_str1[i] = str1[i];
	}
	front_str1[count] = '\0';

	// �ٲٷ��� �ܾ��� �޺κ�
	int j = 0;
	for (int i = count + strlen("boy"); i < strlen(str1); i++)
	{
		last_str1[j] = str1[i];
		j++;
	}
	last_str1[j] = '\0';

	// ���� ���ڿ� �պκ� + "�ٲ� �ܾ�" + ���� ���ڿ� �޺κ�
	strcat(front_str1, "girl");
	strcat(front_str1, last_str1);


	printf("�ٲ� ���ڿ� : %s\n", front_str1);


	return 0;
}