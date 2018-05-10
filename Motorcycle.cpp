#include <iostream>
#include <cstring>
#include "Motorcycle.h"
using namespace std;

void Motorcycle::set_color(){
	cout << "Enter color: ";
	cin >> color;
}

string Motorcycle::get_color(){
	return color;
}

void Motorcycle::set_year(){
	cout << "Enter year: ";
	cin >> year;
}

int Motorcycle::get_year(){
	return year;
}

void Motorcycle::set_make(){
	cout << "Enter Make: ";
	cin >> make;
}

string Motorcycle::get_make(){
	return make;
}

void Motorcycle::set_model(){
	cout << "Enter Model: ";
	cin >> model;
}

string Motorcycle::get_model(){
	return model;
}

void Motorcycle::print(){
	cout << "Color: " << color << endl;
	cout << "Year: " << year << endl;
	cout << "Make: " << make << endl;
	cout << "Model: " << model << endl << endl;
}





