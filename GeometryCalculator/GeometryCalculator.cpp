#include <iostream>

using namespace std;

//This program...

int main() {

	int userChoice = 0 ;

	cout << endl << "Calculate area." << endl << "Enter shape(1 - 4): " << endl << "1 - Circle" << endl << "2 - Rectangle" << endl << "3 - Triangle" << endl << "4 - Quit" << endl;
	cin >> userChoice;

	//Invalid choice
	if (userChoice < 1 | userChoice > 4) {
		cout << "Invalid shape entry. Quitting program..." << endl;
	}
	//Quit selection
	else if (userChoice == 4) {
		cout << "Quitting program" << endl;
	}

	//1-3 selection
	if (userChoice == 1) {
		cout << endl << "Area of a circle.";
	}
	else if (userChoice == 2) {
		cout << endl << "Area of a rectangle.";
	}
	else if (userChoice == 3) {
		cout << endl << "Area of a Triangle.";
	}

	return 0;
}