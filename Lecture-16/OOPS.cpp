#include <iostream>
using namespace std;

///////////////////////// BLUEPRINT/////////////////////////
class Car {
private:
	int price;
public:
	// char name[100];
	char* name;
	int mileage;
	int model;

	//////////////////// DEFAULT FUNCTIONS //////////////////////////
	// 1. Constructor: By default hota hai, bas dikhta nhi h
	Car() {
		cout << "Inside Default Constructor" << endl;
		name = NULL;
	}

	// 2. Parameterized Constructor
	// Car A("Audi", 100, 2020, 10);
	Car(char *n, int p, int m, int mil) {
		cout << "Inside Parameterized Constructor" << endl;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		model = m;
		mileage = mil;
	}

	// 3. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor" << endl;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		mileage = X.mileage;
		model = X.model;
	}

	// 4. Copy Assignment Operator(=)
	// D = C;
	void operator=(Car &X) {
		cout << "Inside Copy Assignment Operator" << endl;
		if (name != NULL) {
			delete [] name;
		}
		name = new char[strlen(X.name) + 1];
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

	void setName(char* n) {
		if (name != NULL) {
			delete[] name;
		}
		name = new char[strlen(n) + 1];
		strcpy(name, n);
	}
	//////// FUNCTIONS ////////////


	/////////////////////////////////////// !OPERATOR OVERLOADING
	void operator+=(Car &X) {
		char *temp = name;
		name = new char[strlen(name) + strlen(X.name) + 1];
		strcpy(name, temp);
		strcat(name, X.name);
		delete []temp;
		temp = NULL;

		price += X.price;
		model += X.model;
		mileage += X.mileage;
	}
	/////////////////////////////////////// !OPERATOR OVERLOADING

	///////////////////////////////////////// GETTER & SETTER
	// Setter
	void setPrice(int p) {
		if (p > 100 and p < 200) {
			price = p;
		}
		else {
			price = 150;
		}
	}
	// Getter
	int getPrice() {
		return price;
	}

	///////////////////////////////////////// !GETTER & SETTER

};
///////////////////////// BLUEPRINT/////////////////////////

int main() {

	Car A; // Object of class Car
	// strcpy(A.name, "AUDI");
	// A.price = 100;
	A.setPrice(-100);
	cout << "A ka price: " << A.getPrice() << endl;

	A.setName("AUDI");

	A.mileage = 10;
	A.model = 2020;

	Car B("BMW", 150, 2022, 8);
	// strcpy(B.name, "BMW");
	// B.price = 150;
	// B.mileage = 8;
	// B.model = 2022;

	// Car C("Maruti", 80, 2021, 15);
	Car C(B);

	// Copy Constructor
	// Car D = C; // or Car D(C);
	Car D(C);


	D.name[0] = 'T';


	A.print();
	B.print();
	C.print();
	D.print();

	// cout << "Checking the operator overloading" << endl;
	// A += B;
	// A.print();

	// COPY Assignment Operator(=)
	// D = B;
	// D.print();




	return 0;
}





















