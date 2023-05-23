#include <iostream>
#include <fstream>
#include <string>
#include <array>
using namespace std;

// Base class B
class B {
	int b;

public:
	B(int x) { b = x; }

	void show_B() {
		cout << "B= " << b << "\n";
	}
};

// Class D1 derived from B
class D1 : public B {
	int d1;

public:
	D1(int x, int y) : B(y) { d1 = x; };

	void show_D1() {
		cout << "D1= " << d1 << "\n";
		show_B();
	}
};

// Class D2 derived from B
class D2 : private B {
	int d2;

public:
	D2(int x, int y) : B(y) { d2 = x; };

	void show_D2() {
		cout << "D2= " << d2 << "\n";
		show_B();
	}
};

// Class D3 derived from B
class D3 : private B {
	int d3;

public:
	D3(int x, int y) : B(y) { d3 = x; };

	void show_D3() {
		cout << "D3= " << d3 << "\n";
		show_B();
	}
};

// Class D4 derived from D1
class D4 : private D1 {
	int d4;

public:
	D4(int x, int y, int z) : D1(y, z) { d4 = x; };

	void show_D4() {
		cout << "D4= " << d4 << "\n";
		show_D1();
	}
};

// Class D5 derived from D1, D2, and D3
class D5 : public D1, public D2, private D3 {
	int d5;

public:
	// Constructor for D5 that initializes its base classes
	D5(int x, int y, int z, int i, int j, int k, int n) : D1(y, z), D2(i, j), D3(k, n) { d5 = x; };

	void show_D5() {
		cout << "D5= " << d5 << "\n";
		show_D1();
		show_D2();
		show_D3();
	}
};

int main() {
	// Create an object of class D4
	D4 temp(100, 200, 300);

	// Create an object of class D5
	D5 temp1(1, 2, 3, 4, 5, 6, 7);

	// Print statements for clarity
	cout << "D4 temp(100,200, 300);\n";
	cout << "D5 temp1(1,2,3,4,5,6,7);\n";

	// Call member functions for D4 and D5 objects
	cout << "\n According to the class hierarchy D4: \n";
	temp.show_D4();

	cout << "\n According to the class hierarchy D5\n";
	temp1.show_D5();
}