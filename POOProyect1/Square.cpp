#include "Square.h"
#include<iostream>
using namespace std;

Square::Square(int size, int desc) {
	_size = size;
	_desc = desc;
}

void Square::draw() {

     cout << "Square size: ";
     cin >> size;
     cout << "\n1) Empty\n2) Fulled\n";
     cin >> desc;
     cout << endl;


    if (desc == 1){
        for (int i = 0; i < size; i++){
            for (int j = 0; j < size; j++){
                if (i == 0 || i == size - 1 || j == 0 || j == size - 1)
                    cout << " * ";
                else cout << "   ";
            }
            cout << endl;
        }
    }

    else if (desc == 2) {
        for (int x = 0; x < size; x++){
            for (int y = 0; y < size; y++){
                cout << " * ";
            }
            cout << endl;
        }
    }
}
