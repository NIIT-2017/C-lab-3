#include <stdio.h>
#include <string.h>

int getMaxWord(char buf[], char word[])
{
	int count; //������� ������ �����
	int inWord = 0; //������ ������ ��������� �����
	int i; //������� ��������� ��������� ������
	int line = 0; //������� ������ �������� �����
	int j = 0; //������� ��������� ��� ������� �������� �����

	if (buf[strlen(buf) - 1] == '\n') //���������� ������ ������
		buf[strlen(buf) - 1] = 0; //�������� \n

	for (i = 0; buf[i] != '\0'; i++)
	{
		for (count = 0; buf[i] != '\0' && buf[i] != ' '; i++) //������� �����
		{
			count++; //������� ���������� ���� � �����
		}
		if (count > inWord) //���������� ����� ������� �����
		{ 
				inWord = count;
				line = i - count;
				for (i = line; i <= (inWord + line); i++)
				{
					word[j] = buf[i];
					j++;
				}
				j = 0;
		}
		
	}
	return inWord;	
}