#pragma once
#ifndef LABA_3_CLASSES_H
#define LABA_3_CLASSES_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Child {
private:
	string name;
	string surname;
	int age;

public:
	void set_Child();
	void get_Child();

};

class Tiles {
public:
	string brand;
	double size_h;
	double size_w;
	double price;
	void get_Data();
};

class Complex {
private:
	double Re;
	double Im;
public:
	void set_Complex();
	void get_Complex();
};
class Vector {
public:
	vector<double> koor;
	void set_Vector(int size);
	void get_Vector();
	void get_Summ(int vec1, int vec2);
	void get_Razn(int vec1, int vec2);
};
#endif;