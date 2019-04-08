#include <iostream>
#include "class.h"
using namespace std;

int main() {
	Child your_Child;
	your_Child.set_Child();
	your_Child.get_Child();
	cout << endl;

	
	Tiles k;
	k.brand = "KAFEL";
	k.size_h = 500;
	k.size_w = 500;
	k.price = 2500;
	k.get_Data();
	cout << endl;

	auto* c1 = new Complex;
	c1->set_Complex();
	c1->get_Complex();
	cout << endl;
	delete c1;
	
	Vector V;
	int size;
	cout << "Number of coordinates: ";
	cin >> size;
	V.set_Vector(size);
	V.get_Vector();
	int vec1, vec2;
	cout << "VVedite nomera vektorov";
	cin >> vec1 >> vec2;
	V.get_Summ(vec1 - 1, vec2 - 1);
	V.get_Razn(vec1 - 1, vec2 - 1);
	system("pause");


}