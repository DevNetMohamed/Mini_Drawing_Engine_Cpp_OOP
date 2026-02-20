#include "Drawable.h"
#include <iostream>
using namespace std;

Drawable::~Drawable() {
	cout << "Drawable Destructor Called" << endl;
}

void Drawable::draw() {
	 cout << "Drawing Your Drawable" << endl;
}
