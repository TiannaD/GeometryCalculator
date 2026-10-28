#include <iostream>

using namespace std;

//This program...

int main() {

	int userChoice = 0;

	cout << endl << "Calculate area." << endl << "Enter shape(1 - 4): " << endl << "1 - Circle" << endl << "2 - Rectangle" << endl << "3 - Triangle" << endl << "4 - Quit" << endl;
	
	cin >> userChoice;

	switch (userChoice) {
		case 1:
			cout << endl << "Area of a circle." << endl;
			break;
		case 2:
			cout << endl << "Area of a rectangle." << endl;
			break;
		case 3:
			cout << endl << "Area of a triangle." << endl;
			break;
		case 4:
			cout << endl << "Quitting" << endl;
			break;
		default:
			cout << endl << "Invalid shape entry. Quitting program...";
	}

	return 0;
}