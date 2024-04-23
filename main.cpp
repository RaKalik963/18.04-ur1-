#include <iostream>
#include <windows.h>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

int main()
{
	cout << "To be,";
	SetConsoleTextAttribute(handle, 0x0D);
	cout << "or not";
	SetConsoleTextAttribute(handle, 0x0F);
	cout << "to be: that is the question:\n";
	cout << "Whether";
	SetConsoleTextAttribute(handle, 0x0E);
	cout << " 'tis nobler in the mind to suffer\n";
	cout << "The slings and arrows of outrageous fortune,\n";
	cout << "Or to take arms against a sea of troubles,\n";
	cout << "And by opposing end them?\n";
	cout << "William Shakespeare" << endl;
	system("pause");
	return 0;
}