#include "Rectangle.h"
#include<iostream>
using namespace std;

Rectangle::Rectangle(int height, int width,  int desc) {
	_height = height;
	_width = width;
	_desc = desc;
}

void Rectangle::draw() {

	cout << "Rectangle width: ";
	cin >> width;
	cout << "Rectangle height: ";
	cin >> height;
	cout << "\n1) Empty\n2) Fulled\n";
	cin >> desc;

	if (desc == 1) {
		for (int i = 0; i < width; i++) {
			for (int j = 0; j < height; j++) {
				if (i != 0 && i != (width - 1)) {
					if (j == 0 || j == (height - 1)) {
						cout << "\t*";
					}
					else {
						cout << "\t ";
					}
				}
				else {
					cout << "\t*";
				}
			}
			cout << "\n";
		}
	}

	if (desc == 2) {
		for (int i = 1; i <= height; i++){
			for (int j = 1; j <= width; j++){
				cout << "*";
			}
			cout << endl;
		}
	}

}