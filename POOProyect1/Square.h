#pragma once
#include"Shape.h"
class Square : public Shape {

protected:
	int _size;
	int _desc;
public:
	Square(int size, int desc);
	void draw();
};


