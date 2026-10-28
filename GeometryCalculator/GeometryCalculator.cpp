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
	double triangleArea = (base * height) / 2;


	cout << endl << "Calculate area." << endl << "Enter shape(1 - 4): " << endl << "1 - Circle" << endl << "2 - Rectangle" << endl << "3 - Triangle" << endl << "4 - Quit" << endl << endl;
	
	cin >> userChoice;

	switch (userChoice) {
		case 1:
			cout << endl << "Area of a circle. Enter radius: " << endl << endl;
			cin >> dimensionChoice1;
			radius = dimensionChoice1;
			circleArea = PI * (radius * radius);
			cout << endl << circleArea;
			break;
		case 2:
			cout << endl << "Area of a rectangle. Enter length: " << endl << endl;
			cin >> dimensionChoice1;
			length = dimensionChoice1;
			cout << endl << "Enter height: " << endl << endl;
			cin >> dimensionChoice2;
			width = dimensionChoice2;
			rectangleArea = length * width;
			cout << endl << rectangleArea;
			break;
		case 3:
			cout << endl << "Area of a triangle. Enter dimensions: " << endl << endl;
			break;
		case 4:
			cout << endl << "Quitting" << endl;
			break;
		default:
			cout << endl << "Invalid shape entry. Quitting program...";
	}

	return 0;
}