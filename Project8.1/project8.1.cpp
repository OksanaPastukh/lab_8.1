//���� ������� �����, ���� ������ ����������� ������� s0, �, sn, �.³����, ��
//����� ��� ������� � �� ������ �� ��� ������.
//1. ������ ����� � ����, �� s� � ����� �� �������� ������.
//2. ������� ������ ��������� ������ �������.
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int find_index(char* str)
{
	int count = 0;
	int i = -1;
	do {
		i++;
		if (str[i] == '.')
		{
			count++;
		}
	
	} while (!(str[i] == '\0' || count == 3));
	return i;
}

char* replace_every_fourth(char* str, const char sym)
{
	for (int i = 3	; str[i] != '\0'; i++)
	{
		if ((i+1) % 4 == 0)
		{
			str[i] = sym;
		}
	}
	return str;
}

int main()
{
	//��������� �������� �����
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	// ����� ������� �, si- ����� �� �������� ������
	cout << "String contained " << find_index(str) << "  '.'" << endl;
	// �����
	char sym = '.';
	cout << "Modified string  : " << replace_every_fourth(str,sym) << endl;
	return 0;
}
