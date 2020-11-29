//Дано літерний рядок, який містить послідовність символів s0, …, sn, ….Відомо, що
//серед цих символів є по крайній мірі три крапки.
//1. Знайти число і таке, що sі – третя за порядком крапка.
//2. Замінити кожний четвертий символ крапкою.
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
	//Створення літерного рядка
	char str[101];
	cout << "Enter string:" << endl;
	cin.getline(str, 100);
	// Пошук індекса і, si- третя за порядком крапка
	cout << "String contained " << find_index(str) << "  '.'" << endl;
	// Заміна
	char sym = '.';
	cout << "Modified string  : " << replace_every_fourth(str,sym) << endl;
	return 0;
}
