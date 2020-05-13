#include "Header.h"

int main()
{
	string pass;
	cout << "Input password: " <<pass;
	cin >> pass;
	cout << "Hashing password: ";
	cout << stringHashing(pass);
	return 0;
}



