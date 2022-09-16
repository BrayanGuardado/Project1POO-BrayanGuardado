#include "Triangle.h"
#include<iostream>
using namespace std;

Triangle::Triangle(int size, int desc) {
	_size = size;
	_desc = desc;
}

void Triangle::draw() {

	int i, j, k, l;

    cout << "Triangle size: ";
    cin >> size;
    cout << "\n1) Empty\n2) Fulled\n";
    cin >> desc;
    cout << endl;

    if (desc == 1) {
        for (i = 1; i <= size - 1; i++) {
            cout << " "; 
        }
        cout << "*" << endl;
        for (i = 2; i <= size - 1; i++) {
            for (j = 1; j <= size - i; j++) {
                cout << " ";
            }
            cout << "*";
            for (j = 1; j <= 2 * i - 3; j++) {
                cout << " ";
            }
            cout << "*" << endl;
        }
        cout << "*";
        for (i = 1; i <= size - 1; i++) {
            cout << " *";
        }
        cout << endl << endl;
    }

    else if (desc == 2) {
        for (k = 1; k <= size - 1; k++) {
            for (l = 1; l <= size - k; l++) {
                cout << " ";
            }
            for (l = 1; l <= 2 * k - 1; l++) {
                cout << "*";
            }
            cout << endl << endl;
        }
    }
}
