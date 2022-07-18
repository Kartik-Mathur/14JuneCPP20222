#include <iostream>
using namespace std;

///////////////////////// BLUEPRINT/////////////////////////
class Car {
private:
	int price;
	const int tyres;
public:
	// char name[100];
	char* name;
	int mileage;
	int model;
	static int cnt;

	//////////////////// DEFAULT FUNCTIONS //////////////////////////
	// 1. Constructor: By default hota hai, bas dikhta nhi h
	Car(): tyres(4), name(NULL) {
		cout << "Inside Default Constructor" << endl;
		// name = NULL;
		// tyres = 4; // Assignment
		cnt++;
	}

	// 2. Parameterized Constructor
	// Car A("Audi", 100, 2020, 10);
	Car(char *name, int price, int model, int mileage): tyres(4) {
		cout << "Inside Parameterized Constructor" << endl;
		this->name = new char[strlen(name) + 1];
		strcpy((*this).name, name);
		this->price = price;
		(*this).model = model;
		(*this).mileage = mileage;
		// price = p;
		// model = m;
		// mileage = mil;
		cnt++;
	}

	// 3. Copy Constructor
	Car(Car &X): tyres(4) {
		cout << "Inside Copy Constructor" << endl;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		price = X.price;
		mileage = X.mileage;
		model = X.model;
		cnt++;
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
		cnt--;
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
int Car::cnt = 0;

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

	// cout << A.cnt << endl;
	// cout << Car::cnt << endl;

	// cout << "Checking the operator overloading" << endl;
	// A += B;
	// A.print();

	// COPY Assignment Operator(=)
	// D = B;
	// D.print();




	return 0;
}





















