#include <iostream>
using namespace std;

int main() {
	// each data type take certain space in memory
	int yearOfBirth = 2000;
	char gender = 'M';
	bool passedOrNot = true;
	float averageGrade = 3.4; // float take 4 bytes
	double balance = 34435345345; // double takes 8 bytes

	cout << "Size of Int is " << sizeof(int) << " bytes" << endl;
	cout << "Int min value is " << INT_MIN << endl;
	cout << "Int max value is " << INT_MAX << endl;

	cout << "Size of unsigned Int is " << sizeof(unsigned int) << " bytes" << endl;
	cout << "UINT max value is " << UINT_MAX << endl;

	cout << "Size of bool is " << sizeof(bool) << " bytes" <<  endl;
	cout << "Size of char is " << sizeof(char) << " bytes" << endl;
	cout << "Size of float is " << sizeof(float) << " bytes" << endl;
	cout << "Size of double is " << sizeof(double) << " bytes" << endl;

	system("pause>0");
}
