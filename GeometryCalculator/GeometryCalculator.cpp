#include <iostream>

using namespace std;

//This program will ask user for a shape to calculate it's area

int main() {

	//User inputs
	int userChoice;
	int dimensionChoice1;
	int dimensionChoice2;

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

			if (radius < 0) {
				cout << endl << "Invalid dimension." << endl;
				break;
			}
			else {
				circleArea = PI * (radius * radius);
				cout << endl << "Area: " << circleArea << endl;
				break;
			}

		case 2:
			cout << endl << "Area of a rectangle." << endl << "Enter length and width: " << endl << endl;
			cin >> dimensionChoice1 >> dimensionChoice2;
			length = dimensionChoice1;
			width = dimensionChoice2;

			if (length < 0 || width < 0) {
				cout << endl << "Invalid dimension(s)." << endl;
				break;
			}
			else {
				rectangleArea = length * width;
				cout << endl << "Area: " << rectangleArea << endl;
				break;
			}

		case 3:
			cout << endl << "Area of a triangle." << endl << "Enter base and height: " << endl << endl;
			cin >> dimensionChoice1 >> dimensionChoice2;
			base = dimensionChoice1;
			height = dimensionChoice2;

			if (base < 0 || height < 0) {
				cout << endl << "Invalid dimension(s)." << endl;
				break;
			}
			else {
				triangleArea = (base * height) / 2;
				cout << endl << "Area: " << triangleArea << endl;
				break;
			}

		case 4:
			cout << endl << "Quitting program." << endl;
			break;
		default:
			cout << endl << "Invalid menu selection. Quitting program..." << endl;
	}

	return 0;
}