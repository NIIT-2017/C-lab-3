#include <stdio.h>
#include <string.h>

#define N 256

int main()
{
    int buf[N] = { 0 }; //������ � ������� ��������� ������ � ��������
	char str[N] = { 0 }; //������ � ������� ������������ ������
  
	printf("Enter line\n");
	fgets(str, 256, stdin);
    int simvol = strlen(str); //������ ������ ��������� ������

    int i;
    for(i = 0; i < simvol; i++) //������ �� �������
    {
		buf[str[i]]++; //������ � ������ buf ��������� ������� str 
    }

    for(i = 0; i < N; i++) // ����� ������� �� ������� � ���������� ��������� ���������
    {
        if(buf[i]) //���� ��������� ������ ������� �������� ������ ���������� � ���� �����������
        printf("'%c' - %d\n", (char)i, buf[i]);
    }

    return 0;
}