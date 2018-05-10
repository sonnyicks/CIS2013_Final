#include <iostream>
#include <cstring>
using namespace std;

class Motorcycle{
	private:
	string color="White";
	int year=2000;
	string make="Harley";
	string model="Davison";
	
	public:
	void set_color();
	string get_color();
	void set_year();
	int get_year();
	void set_make();
	string get_make();
	void set_model();
	string get_model();
	void print();
	
};