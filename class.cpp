
#include "child.h"
#include "tiles.h"
#include "complex.h"
#include "vector.h"
#include <math.h>
void Child::set_Child() 
{

	cout << "Name: ";
	cin >> name;

	cout << "Surname: ";
	cin >> surname;

	cout << "Age: ";
	cin >> age;

}

void Child::get_Child() 
{

	cout << "Name: " << name << endl
		<< "Surname: " << surname << endl
		<< "Age: " << age << endl;
}

void Tiles::get_Data() 
{
	cout << "Brand: " << brand << endl
		<< "Height: " << size_h << endl
		<< "Width: " << size_w << endl
		<< "Price: " << price << endl;

}

void Complex::set_Complex() 
{
	cout << "Real part: ";
	cin >> Re;
	cout << "Imaginary part: ";
	cin >> Im;

}

void Complex::get_Complex()
{
	cout << "Re: " << Re << endl
		<< "Im: " << Im << endl
		<< "Module: " << sqrt(Re * Re + Im * Im) << endl;

}

void Vector::set_Vector(int size) 
{
	double inp;
	for (int i = 0; i < size * 2; i++)
	{
		cin >> inp;
		koor.push_back(inp);
	}

}

void Vector::get_Vector() 
{
	for (int i = 0; i < koor.size() / 2; i++)
		cout << "Koor" << i + 1 << ":" << koor.at((i + 1) * 2 - 2) << ", " << koor.at((i + 1) * 2 - 1) << endl;

}
void Vector::get_Summ(int vec1, int vec2)
{
	cout << koor.at((vec1 + 1) * 2 - 2) + koor.at((vec2 + 1) * 2 - 2) << "," << koor.at((vec1 + 1) * 2 - 1) + koor.at((vec2 + 1) * 2 - 1) << endl;
}
void Vector::get_Razn(int vec1, int vec2)
{
	cout << koor.at((vec1 + 1) * 2 - 2) - koor.at((vec2 + 1) * 2 - 2) << "," << koor.at((vec1 + 1) * 2 - 1) - koor.at((vec2 + 1) * 2 - 1);
}