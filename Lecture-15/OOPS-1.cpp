#include <iostream>
using namespace std;

///////////////////////// BLUEPRINT/////////////////////////
class Car {
public:
	char name[100];
	int price;
	int mileage;
	int model;
};
///////////////////////// BLUEPRINT/////////////////////////

int main() {

	Car A;
	// A.name = "AUDI"; // We cannot assign the name to character array
	// this way
	// A.name[0] = 'A';
	// A.name[1] = 'U';
	// A.name[2] = 'D';
	// A.name[3] = 'I';
	// A.name[4] = '\0';
	strcpy(A.name, "AUDI");
	A.price = 100;
	A.mileage = 10;
	A.model = 2020;

	cout << "Name     : " << A.name << endl;
	cout << "Price    : $" << A.price << endl;
	cout << "Mileage  : " << A.mileage << endl;
	cout << "Model    : " << A.model << endl;

	return 0;
}
















