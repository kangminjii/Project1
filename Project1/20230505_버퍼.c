#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{

	int num, grade;
	printf("�й� �Է� : ");
	scanf("%d", &num); // ���� + ���͸� �Է�

	// ���Ͱ� ���ۿ� ���� ����
	getchar(); // ���ۿ� ���� �ִ� ���� ���� ����
			     // ���� ���� ���Ÿ� ���� �ʴ´ٸ� grade�� �Է��� ���� ���� ���·� ����('\n')�� �����
	printf("���� �Է� : ");
	grade = getchar(); 
	
	printf("�й� : %d,  ���� : %c", num, grade);

\

	return 0;
}