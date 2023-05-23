#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

// Abstract base class Container
class Container {
public:
    // Virtual functions for sorting and looping through the container
    virtual void sort() {};
    virtual void foreach() {};
};

// Derived class Bubble, which implements Container
class Bubble : public Container {
public:
    // Data member for holding the container elements
    vector<int> data;

    // Constructor for initializing the data member
    Bubble(vector<int> data) :data(data) {}

    // Override the sort function with bubble sort algorithm
    void sort() override {
        int temp = 0;
        // Bubble sort the container
        for (int i = 0; i < data.size(); i++) {
            for (int j = data.size() - 1; j > i; j--) {
                if (data[j] < data[j - 1]) {
                    temp = data[j - 1];
                    data[j - 1] = data[j];
                    data[j] = temp;
                }
            }
        }

        // Output the sorted container
        cout << "Bubble sort: ";
        for (int i = 0; i < data.size(); i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }

    // Override the foreach function with square root operation
    void foreach() override {
        for (int i = 0; i < data.size(); i++) {
            cout << "Square root of " << data[i] << " = " << sqrt(data[i]) << endl;
        }
        cout << endl;
    }
};

// Derived class Choice, which implements Container
class Choice : public Container {
public:
    // Data member for holding the container elements
    vector<int> data2;

    // Constructor for initializing the data member
    Choice(vector<int> data) : data2(data) {};

    // Override the sort function with selection sort algorithm
    void sort() override {
        int min;
        int temp;

        // Selection sort the container
        for (int i = 0; i < data2.size(); i++) {
            min = i;
            for (int j = i + 1; j < data2.size(); j++) {
                min = (data2[j] < data2[min]) ? j : min;

                if (i != min) {
                    temp = data2[i];
                    data2[i] = data2[min];
                    data2[min] = temp;
                }
            }
        }

        // Output the sorted container
        cout << "Selection sort: ";
        for (int i = 0; i < data2.size(); i++) {
            cout << data2[i] << " ";
        }
        cout << endl;
    }

    //Redefine the foreach function with a logarithm operation
	void foreach() {
		for (int i = 0; i < data2.size(); i++) {
			cout << "Логорифм " << data2[i] << " = " << log(data2[i]) << endl;
		}
		cout << endl;
	}
};

int main() {

	vector<int> data = { 5,3,7,1,9,2,8,4,6,0 };

	Bubble bubble(data);
	bubble.sort();
	bubble.foreach();

	vector<int> data2 = { 5,7,4,9,7,5,4,8,7,1};

	Choice choice(data2);

	choice.sort();
	choice.foreach();
}
