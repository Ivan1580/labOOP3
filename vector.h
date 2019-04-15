#pragma once
#ifndef LABA_3_CLASSES_V
#define LABA_3_CLASSES_V
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Vector {
public:
	vector<double> koor;
	void set_Vector(int size);
	void get_Vector();
	void get_Summ(int vec1, int vec2);
	void get_Razn(int vec1, int vec2);
};
#endif;