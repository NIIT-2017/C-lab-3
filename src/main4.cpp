#include <stdio.h>
#include <string.h>
#include "task4.h"


int main()
{
	char buf[256] = { 0 };
	char word[256] = { 0 };

	printf("Enter any words\n");
	fgets(buf, 256, stdin);
	if (buf[strlen(buf - 1)] == '\n')
		buf[strlen(buf - 1)] = '\0';
	printf("SUM=%d", getSum(buf));
	return 0;
}