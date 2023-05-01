#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*
	Q1. 1이상 100미만인 정수 m과 n을 입력 받아 두 수의 배수를 출력하는 프로그램을 작성하라.
		단, m의 배수이면서 n의 배수인 정수는 한 번만 출력해야 한다. (100 이하의 정수까지만 출력)
		ex) 7 9
		--> 7 9 14 18 21 27 28 35 36 ... 63 ... 99
	*/
	/*int m, n;

	printf("1이상 100 미만인 정수 m과 n을 입력 해주세요 : ");
	scanf("%d %d", &m, &n);


	for(int i = 1; i < 100; i++)
	{
		if (i % m == 0 || i % n == 0)
		{
			printf("%d ", i);
		}
	}*/


	/*
	Q2. 임의의 n을 입력 받아서 다음과 같은 형태로 출력하도록 하라.
		ex) n = 5인 경우
			*
			**
			***
			****
			*****
				*
			   **
			  ***
			 ****
			*****
	*/


	//int n;

	//printf("임의의 정수 n을 입력해주세요 : ");
	//scanf("%d", &n);

	//// 정방향
	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//	{
	//		if (j == i)
	//		{
	//			break;
	//		}
	//		else
	//		{
	//			printf("*");
	//		}
	//	}
	//	printf("\n");
	//}
	//
	///*	또다른 풀이
	//
	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 0; j < i; j++)
	//	{
	//		printf("*");
	//	}
	//	printf("\n");
	//}

	//*/

	//// 역방향
	//for (int i = n; i > 0; i--)
	//{
	//	for (int j = 0; j < n; j++)
	//	{
	//		if (i-j > 1)
	//		{
	//			printf(" ");
	//		}
	//		else
	//		{
	//			printf("*");
	//		}
	//	}
	//	printf("\n");
	//}

	///*	또다른 풀이
	//for (int i = 1; i <= n; i++)
	//{
	//	for (int j = 0; j < n; j++)
	//	{
	//		if (n - i - j <= 0)
	//		{
	//			printf("*");
	//		}
	//		else
	//		{
	//			printf(" ");
	//		}
	//	}
	//	printf("\n");
	//}

	//*/


/*
연습문제. 임의의 n을 입력 받아서 다음과 같은 형태로 출력하도록 하라. (p.176 참고)
	ex) n = 5인 경우

	*   *
	 * *
	  *
	 * *
	*   *
*/

/*int n;

printf("임의의 정수 n을 입력해주세요 : ");
scanf("%d", &n);

for (int i = 0; i < n; i++)
{

	for (int j = 0; j < n; j++)
	{
		if (i + j == n - 1 || j == i)	printf("*");
		else printf(" ");
	}
	printf("\n");
}*/


/*
Q3. 임의의 수 n을 입력 받아 다음과 같은 형태가 되도록 프로그램을 작성하라.
	ex) n = 5
	*   *
	** **
	*****
	** **
	*   *
*/

//int n;

//printf("임의의 정수 n을 입력해주세요 : ");
//scanf("%d", &n);


//for (int i = 0; i < n; i++)
//{
//	for (int j = 0; j < n; j++)
//	{
//		if (i < n / 2)
//		{
//			if (j >= n - 1 - i || j <= i)
//				printf("* ");
//			else
//				printf("  ");
//		}
//		else
//		{
//			if (j <= n - 1 - i || j >= i)
//				printf("* ");
//			else
//				printf("  ");
//		}

//	
//		/*	if문 1개 생략 풀이
//		if ((j >= n - 1 - i || j <= i) && i < (n / 2))
//			printf("* ");
//		else if ((j <= n - 1 - i || j >= i) && i >= (n / 2))
//			printf("* ");
//		else
//			printf("  ");
//		*/
//	}
//	printf("\n");
//}


/*
Q4. 다음과 같이 형태가 되도록 구구단을 출력하라.
	원하는 단 n을 입력 받아 n단까지 출력한다.
	ex) n=6  (2단 ~ 18단)
			구 구 단
	-----------------------------
	2 x 1 = 2  3 x 1 = 3  4 x 1 = 4
	2 x 2 = 4  3 x 2 = 6  4 x 2 = 8

*/

	int n;

	printf("임의의 정수 n을 입력해주세요 : ");
	scanf("%d", &n);
	printf("\t\t 구 구 단 \t\t\n");
	printf("---------------------------------------------\n");

	for (int i = 0; i < (n-1); i+=3)
	{
		for (int j = 1; j < 10; j++)
		{
			for (int k = 2; (k+i) <= n; k++)
			{
				printf("%1d x %1d = %2d\t", k+i, j, (k+i) * j);
				
				if (k % 3 == 1)
				{
					printf("\n");
					break;
				}
				else if (k + i == n)
				{
					printf("\n");
					
				}
			}
		}
		printf("---------------------------------------------\n");
	}
	
	


	return 0;
}
