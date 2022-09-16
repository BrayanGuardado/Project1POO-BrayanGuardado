#pragma once
#include"Shape.h"
class Rectangle : public Shape{

protected:
	int _height, _width, _desc;
public:
	Rectangle(int height, int width, int desc);
	void draw();

};

