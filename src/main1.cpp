#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#include<locale>
 
int main()
{
	setlocale(LC_ALL, "RUSSIAN");
	char buf[255] = { 0 };
	printf("������  ������ \n");
	fgets(buf, 255, stdin);
	printf("%d",wordCount(buf));
	return 0;
}
