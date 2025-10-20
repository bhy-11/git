#include<stdio.h>
#include"text.h"
#include"text.c"

int main()
{
	int a = 10, b = 5;

	printf("%d+%d=%d\n", a, b, add(a, b));
	return 0;
}