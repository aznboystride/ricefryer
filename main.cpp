#include <Windows.h>
#include "Fryer.h"

int main()
{
	Fryer fryer;
	while (1) {
		cout << "\n----------Current State----------: " << fryer.Get()->getName() << endl;
		cout << "\t1. Cook" << endl;
		cout << "\t2. Stop Cook" << endl;
		cout << "\t3. Lock Lid" << endl;
		cout << "\t4. Unlock Lid" << endl;
		cout << "\tEnter choice: ";
		int ch;
		cin >> ch;
		cout << "\t";
		switch (ch) {
		case 1:
			fryer.();
			break;
		case 2:
			fryer.stopCook();
			break;
		case 3:
			fryer.insertRice();
			break;
		case 4:
			fryer.removeRice();
			break;
		default:
			cout << "Invalid Option" << endl;
		}
		cout << "\t";
		system("pause");
		system("cls");
	}
	return 0;
}