#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

/*
Q4. �Է� ���� ���� ���밪�� ���ϴ� �Լ� abs()�� �����϶�.
	ex) 
	�����Ϸ��� 0�� �Է� �Ͻÿ�.
	���� �Է� : -34
	���밪�� : 34
*/

int abs(int number);

int main()
{
	int number;

	while (1)
	{
		printf("�����Ϸ��� 0�� �Է��Ͻÿ�.\n");
		printf("���� �Է� : ");
		scanf("%d", &number);
		
		if (number == 0)	break;

		printf("���밪�� : %d\n", abs(number));
	}

	return 0;
}

int abs(int number)
{
	if (number < 0)	return number *= -1; // number *= -1 ���� �ٷ� return���ִ� ���� runtime�� ����ȭ��

	return number;
}