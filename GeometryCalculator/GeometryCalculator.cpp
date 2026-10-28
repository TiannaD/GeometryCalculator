#include <iostream>

using namespace std;

//This program...

int main() {

	//User inputs
	int userChoice = 0;
	int dimensionChoice1 = 0;
	int dimensionChoice2 = 0;

	//Circle vars
	double PI = 0;
	double radius = 0;
	//Rectangle vars
	double length = 0;
	double width = 0;
	//Triangle vars
	double base = 0;
	double height = 0;

	//Area formulas
	double circleArea = PI * (radius * radius);
	double rectangleArea = length * width;
	double triangleArea = (base * height) / 2 ;


	cout << endl << "Calculate area." << endl << "Enter shape(1 - 4): " << endl << "1 - Circle" << endl << "2 - Rectangle" << endl << "3 - Triangle" << endl << "4 - Quit" << endl;
	
	cin >> userChoice;

	switch (userChoice) {
		case 1:
			cout << endl << "Area of a circle. Enter dimensions: " << endl;
			break;
		case 2:
			cout << endl << "Area of a rectangle. Enter dimensions: " << endl;
			break;
		case 3:
			cout << endl << "Area of a triangle. Enter dimensions: " << endl;
			break;
		case 4:
			cout << endl << "Quitting" << endl;
			break;
		default:
			cout << endl << "Invalid shape entry. Quitting program...";
	}

	return 0;
}