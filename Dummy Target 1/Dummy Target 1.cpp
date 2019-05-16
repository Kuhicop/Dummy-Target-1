#include "pch.h"
#include <iostream>
#include <Windows.h>
#include <string>
using namespace std;
#define CHAR_ARRAY_SIZE 128

int main()
{
	int varInt = 123456;
	string varString = "DefaultString";
	char arrChar[CHAR_ARRAY_SIZE] = "Long char array right there ->";
	int * ptr2int;
	ptr2int = &varInt;
	int ** ptr2ptr;
	ptr2ptr = &ptr2int;
	int *** ptr2ptr2;
	ptr2ptr2 = &ptr2ptr;

	while(True) {
		cout << "Process ID: " << GetCurrentProcessId() << endl;

		cout << "varInt (0x" << &varInt << ") = " << varInt << endl;
		cout << "varString (0x" << &varString << ") = " << varString << endl;
		cout << "varChar (0x" << &arrChar << ") = " << arrChar << endl;

		cout << "ptr2int (0x" << hex << &ptr2int << ") = " << ptr2int << endl;
		cout << "ptr2ptr (0x" << hex << &ptr2ptr << ") = " << ptr2ptr << endl;
		cout << "ptr2ptr2 (0x" << hex << &ptr2ptr2 << ") = " << ptr2ptr2 << endl;

		cout << "Press ENTER to print again." << endl;
		getchar();
		cout << "-----------------------------------" << endl << endl;
	}

	return 0;
}
