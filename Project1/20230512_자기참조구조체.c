#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct list 
{
	int num;
	struct list* next;
};

int main()
{
	struct list a = { 10, 0 }, b = { 20,0 }, c = { 30, NULL };
	
	struct list* current;

	current = &a;
	a.next = &b;
	b.next = &c;

	while (current != NULL)
	{
		printf("%d  ", current->num);
		current = current->next;
	}
	printf("\n");


	return 0;
}