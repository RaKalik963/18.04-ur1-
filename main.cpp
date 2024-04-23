#include <iostream>
#include <windows.h>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);


int main()
{
	cout << "Sell pups." << endl;
	cout << "Rottweiler breed." << endl;
	cout << "....." << endl;
	cout << "Num.: 222 - 22 - 22" << endl;
	cout << "222      |   ";
	SetConsoleTextAttribute(handle, 0x06);
	cout << "222   ";
	SetConsoleTextAttribute(handle, 0x0F);
	cout <<	"|" << endl;
	cout << "22       |   ";
	SetConsoleTextAttribute(handle, 0x06);
	cout << "22    ";
	SetConsoleTextAttribute(handle, 0x0F);
	cout <<	"|" << endl;
	cout << "22       |   ";
	SetConsoleTextAttribute(handle, 0x06);
	cout << "22    ";
	SetConsoleTextAttribute(handle, 0x0F);
	cout <<	"|" << endl;
	cout << "etc." << endl;
	system("pause");
	return 0;
}