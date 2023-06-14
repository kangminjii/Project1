#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>

/*
Q3. ���� ���� ���α׷� �����
	������ ���ϸ�� ���� �� �����Ǵ� ���ϸ��� �Է� �޾Ƽ� ������ ������ �����ϴ� ���α׷� �ۼ�.
	��, txt ���� �Ӹ� �ƴ϶� �̹��� ���� ��.. ��� ������ ���Ͽ� �� �����ϰ� ������ �� �־�� �Ѵ�.
	���� ���� ������ ������� ȭ�鿡 ǥ�����ֵ��� �ϰ�, �ѹ��� n����Ʈ�� �����ϵ��� �Ѵ�.
	ex) 4 ����Ʈ
		���� ���� : source.txt
		��� ���� : dest.txt
*/

int main()
{
	FILE* fpr, * fpw;
	char filename[100], newname[100];
	int n;

	printf("���� ���� : ");
	scanf("%s", &filename);
	printf("����� ���� : ");
	scanf("%s", &newname);
	printf("�� ����Ʈ�� �����ϴ°�? ");
	scanf("%d", &n);

	fpr = fopen(filename, "rb");
	if (fpr == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}
	fpw = fopen(newname, "wb");
	if (fpw == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}

	fseek(fpr, 0, SEEK_END);
	int size = ftell(fpr);
	fseek(fpr, 0, SEEK_SET);

	int* buf = (int*)malloc(n * sizeof(int));
	int count = 0;
	while (count <= size)
	{
		fread(buf, sizeof(buf), 1, fpr);
		fwrite(buf, sizeof(buf), 1, fpw);
		
		printf("���൵ : %.1f%\n", 100 * (double)count / (double)size);
		count += n;
		system("cls");
	}

	fclose(fpr);
	fclose(fpw);

	return 0;
}