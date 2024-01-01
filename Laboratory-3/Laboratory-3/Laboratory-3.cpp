#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	char c, probel; probel = ' ';
	cout << "Введите символ: "; cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(17) << setfill(c) << c << endl;

	cout << setw(31) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
}