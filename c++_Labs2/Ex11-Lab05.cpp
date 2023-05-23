#include <vector>
#include <iostream>
using namespace std;

/*
Описати клас, що реалізує тип даних масив. Реалізувати зміну значень
ненульових елементів масиву на протилежні, нулі замінити 1.
*/

class Array {
private:
    vector<int> data;

public:
    // Constructor
    Array(int arr[], int n) {
        for (int i = 0; i < n; i++) {
            data.push_back(arr[i]);
        }
    }

    // Changing array elements
    void change() {
        for (int i = 0; i < data.size(); i++) {
            if (data[i] == 0) {
                data[i] = 1;
            }
            else {
                data[i] = -data[i];
            }
        }
    }

    //Output of the array
    void print() {
        for (int i = 0; i < data.size(); i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    int arr[] = { 0,2,-5,0,10,-10,0,0,-8}; // our array
    int n = sizeof(arr) / sizeof(arr[0]); // get the length of the array

    Array a(arr, n); // we pass the array and length

    // class methods
    cout << "Unchanged array" << endl;
    a.print();

    cout << endl;
    a.change();

    cout << "Changed array using class" << endl;
    a.print();

}