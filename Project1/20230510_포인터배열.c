#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int main()
{
	/*char* pary[5];

	pary[0] = "dog";
	pary[1] = "elephant";
	pary[2] = "horse";
	pary[3] = "tiger";
	pary[4] = "lion";

	for (int i = 0; i < 5; i++)
	{
		printf("%s\n", pary[i]);
	}*/

	int ary1[4] = { 1,2,3,4 };
	int ary2[4] = { 11, 12, 13, 14 };
	int ary3[4] = { 21, 22, 23, 24};
	int* pary[3] = { ary1, ary2, ary3 };
	
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("pary : %5d, pary аж╪р : %p\n", pary[i][j], &pary[i][j]);
		}
		printf("\n");
	}



	return 0;
}