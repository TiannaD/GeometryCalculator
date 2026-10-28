#include <iostream>

using namespace std;

//This program...

int main() {

	//User inputs
	int userChoice = 0;
	int dimensionChoice1 = 0;
	int dimensionChoice2 = 0;

	//Circle vars
	double const PI = 3.14;
	double radius = 0;
	//Rectangle vars
	double length = 0;
	double width = 0;
	//Triangle vars
	double base = 0;
	double height = 0;

	//Area formulas
	double circleArea = 0;
	double rectangleArea = 0;
	double triangleArea = 0;


	cout << endl << "Calculate area." << endl << "Enter shape(1 - 4): " << endl << "1 - Circle" << endl << "2 - Rectangle" << endl << "3 - Triangle" << endl << "4 - Quit" << endl << endl;
	
	cin >> userChoice;

	switch (userChoice) {
		case 1:
			cout << endl << "Area of a circle." << endl << "Enter radius: " << endl << endl;
			cin >> dimensionChoice1;
			radius = dimensionChoice1;
			circleArea = PI * (radius * radius);
			cout << endl << "Area: " << circleArea << endl;
			break;
		case 2:
			cout << endl << "Area of a rectangle." << endl << "Enter length and width: " << endl << endl;
			cin >> dimensionChoice1 >> dimensionChoice2;
			length = dimensionChoice1;
			width = dimensionChoice2;
			rectangleArea = length * width;
			cout << endl << "Area: " << rectangleArea << endl;
			break;
		case 3:
			cout << endl << "Area of a triangle." << endl << "Enter base and height: " << endl << endl;
			cin >> dimensionChoice1 >> dimensionChoice2;
			base = dimensionChoice1;
			height = dimensionChoice2;
			triangleArea = (base * height) / 2;
			cout << endl << "Area: " << triangleArea << endl;
			break;
		case 4:
			cout << endl << "Quitting program" << endl;
			break;
		default:
			cout << endl << "Invalid shape entry. Quitting program..." << endl;
	}

	return 0;
}