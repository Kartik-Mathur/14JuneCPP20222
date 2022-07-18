#include <iostream>
using namespace std;

///////////////////////// BLUEPRINT/////////////////////////
class Car {
public:
	char name[100];
	int price;
	int mileage;
	int model;

	//////////////////// DEFAULT FUNCTIONS //////////////////////////
	// 1. Constructor: By default hota hai, bas dikhta nhi h
	Car() {
		cout << "Inside Default Constructor" << endl;
	}

	// 2. Parameterized Constructor
	Car(char *n, int p, int m, int mil) {
		cout << "Inside Parameterized Constructor" << endl;
		strcpy(name, n);
		price = p;
		model = m;
		mileage = mil;
	}

	// 3. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor" << endl;
		strcpy(name, X.name);
		price = X.price;
		mileage = X.mileage;
		model = X.model;
	}

	// 4. Copy Assignment Operator(=)
	void operator=(Car &X) {
		cout << "Inside Copy Assignment Operator" << endl;
		strcpy(name, X.name);
		price = X.price;
		model = X.model;
		mileage = X.mileage;
	}

	// 5. Destructor: Object ko destroy krta hai
	~Car() {
		cout << "Deleting car: " << name << endl;
	}

	//////////////////// !DEFAULT FUNCTIONS //////////////////////////



	//////// FUNCTIONS ////////////
	void print() {
		cout << "Name     : " << name << endl;
		cout << "Price    : $" << price << endl;
		cout << "Mileage  : " << mileage << endl;
		cout << "Model    : " << model << endl << endl;
	}
	//////// FUNCTIONS ////////////
};
///////////////////////// BLUEPRINT/////////////////////////

int main() {

	Car A; // Object of class Car
	strcpy(A.name, "AUDI");
	A.price = 100;
	A.mileage = 10;
	A.model = 2020;
	A.print();

	Car B("BMW", 150, 2022, 8);
	// strcpy(B.name, "BMW");
	// B.price = 150;
	// B.mileage = 8;
	// B.model = 2022;
	B.print();

	Car C("Maruti", 80, 2021, 15);
	C.print();

	// Copy Constructor
	// Car D = C; // or Car D(C);
	Car D(C);
	D.print();

	// COPY Assignment Operator(=)
	// D = B;
	// D.print();




	return 0;
}





















