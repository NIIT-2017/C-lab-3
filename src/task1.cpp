#include <stdio.h>
#include <string.h>
#include<stdlib.h>

int wordCount(char buf[])
{
	int count = 0;
	int inWord = 0;
	int i = 0;
	
	
	if (buf[strlen(buf) - 1] == '\n') //���������� ������ ������
		buf[strlen(buf) - 1] = 0; //�������� \n

	while (buf[i])//������ �� ������
	{
		if (buf[i] != ' ' && inWord == 0) //����  ������� � 0 - ������ �����
		{
			count++;
			inWord = 1;	
		
		}
		else if (buf[i] == ' ' && inWord == 1)// ���� ������ � 1 - ����� �����
		{
			inWord = 0;					
		}
		i++;		
	}
	
	
	return count;
}