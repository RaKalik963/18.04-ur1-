#include <iostream>
#include <windows.h>
using namespace std;
HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

/*SetConsoleTextAttribute(handle, FOREGROUND_RED);
*/
int main()
{
	SetConsoleTextAttribute(handle, 0x06);
	cout << "\"Hello, World!\"" << endl;
	SetConsoleTextAttribute(handle, 0x0F);
	cout << "/Bjarne Stroustrup/" << endl;
	system("pause");
	return 0;
}