#include"Menu.h"
#include"Square.h"
#include"Triangle.h"
#include"Rectangle.h"
#include"DrawShape.h"
#include<iostream>
using namespace std;

void Menu::printMenu() {

	cout << "------------------" << endl;
	cout << "||POO with Shapes||"<<endl;
	cout << "------------------" << endl;
	cout << endl;
	cout << "1) Square" << endl;
	cout << "2) Triangle" << endl;
	cout << "3) Rectangle " << endl;
	cin >> opc;

	Shape* shape;

	if (opc == 1) {
		shape = new Square(size, desc);
	}
	else if (opc == 2) {
		shape = new Triangle(size, desc);
	}
	else {
		shape = new Rectangle(height, width, desc);
	}
	DrawShape draw;
	draw.printShape(shape);
	
}
