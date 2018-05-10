#include <iostream>
#include <cstring>
#include "Motorcycle.h"
using namespace std;

void menu();

int main(){
	char next;
	Motorcycle first;
	cout << "Here is your starting bike: " << endl;
	first.print();
	Motorcycle user;
	
	while (next != 'x'){
		menu();
		cin >> next;
		
		switch(next){
			case 'c':
			user.set_color();
			break;
			case 'y':
			user.set_year();
			break;
			case 'm':
			user.set_make();
			break;
			case 'd':
			user.set_model();
			break;
			case 'p':
			user.print();
			break;
			case 'x':
			break;
		}

	}
	return 0;
}

void menu(){
	cout << "What do you want to change?: " << endl;	
	cout << "Change color (c)" << endl;
	cout << "Change year (y)" << endl;
	cout << "Change make (m)" << endl;
	cout << "Change model (d)" << endl;
	cout << "Print info (p)" << endl;
	cout << "exit (x)" << endl;
}

