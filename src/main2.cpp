#include <stdio.h>
#include <string.h>

int main()
{
	char buf[256];
	int count = 0;
	int inWord = 0;
	int i = 0;
	printf("Enter a line \n");
	fgets(buf, 256, stdin); //���������� �������� �� ������

	if (buf[strlen(buf) - 1] == '\n') //���������� ������ ������
		buf[strlen(buf) - 1] = 0; //�������� \n

	while (buf[i])//������ �� ������
	{
		if (buf[i] != ' ' && inWord == 0) //����  ������� � 0 - ������ �����
		{
			count++;
			inWord = 1;
			printf("%c", buf[i]);
		}
		else if (buf[i] != ' ' && inWord == 1) //���� �� ������ � 1 - �������� �����
		{
			count++;
			printf("%c", buf[i]);
		}
		else if (buf[i] == ' ' && inWord == 1)// ���� ������ � 1 - ����� �����
		{
			inWord = 0;
			printf("-%d\n", count);
			count = 0;
		}
		i++;
	}
	if (inWord == 1)
		printf("-%d\n", count);
	return 0;
}