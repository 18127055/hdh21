#include <iostream>
using namespace std;

int main()
{
	int choice;
	cout << "1. Open available volume: " << endl;
	cout << "2. Create new volume: " << endl;
	cout << "3. Show list of file:  " << endl;
	cout << "4. Create password for a file: " << endl;
	cout << "5. Export a file: " << endl;
	cout << "6. Import a file: " << endl;
	cout << "7. Delete a file: " << endl;
	cout << "Input choice: " << endl;
	cin >> choice;
	switch (choice)
	{
		case 1:
		{
			//openVolume();
			break;
		}
		case 2:
		{
			// createVolume();
			break;
		}
		case 3:
		{
			// listFile();
			break;
		}
		case 4:
		{
			//makePassword();
			break;
		}
		case 5:
		{
			//exportFile();
			break;
		}
		case 6:
		{
			//importFile();
			break;
		}
		case 7: 
		{
			//deleteFile();
			break;
		}
		default: 
		{
			cout << "Input choice: " << endl;
			cin >> choice;
		}
	}
	return 0;
}
