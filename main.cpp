#include <iostream>
#include <windows.h>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	SetConsoleTextAttribute(handle, 0x04);
	cout << "every hunter wants to know where does pheasant sit" << endl;

	SetConsoleTextAttribute(handle, 0x0C);
	cout << "every hunter wants to know where does pheasant sit" << endl;

	SetConsoleTextAttribute(handle, 0x06);
	cout << "every hunter wants to know where does pheasant sit" << endl;

	SetConsoleTextAttribute(handle, 0x02);
	cout << "every hunter wants to know where does pheasant sit" << endl;

	SetConsoleTextAttribute(handle, 0x01);
	cout << "every hunter wants to know where does pheasant sit" << endl;

	SetConsoleTextAttribute(handle, 0x03);
	cout << "every hunter wants to know where does pheasant sit" << endl;

	SetConsoleTextAttribute(handle, 0x05);
	cout << "every hunter wants to know where does pheasant sit" << endl;
	SetConsoleTextAttribute(handle, 0x0F);

	system("pause");
	return 0;
}