#pragma once
#include"Shape.h"
class Triangle : public Shape{
protected:
	int _size, _desc;
public:
	Triangle(int size, int desc);
	void draw();	
};

