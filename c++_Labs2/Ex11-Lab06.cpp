#include <iostream>
#include <complex>
using namespace std;

template<typename T, int size>
class Array {
private:
    T arr[size];
public:
    void set(int index, T value) {
        arr[index] = value;
    }
    T get(int index) {
        return arr[index];
    }
};

int main() {
    // Тестування шаблону класу Array для масива цілих чисел
    Array<int, 5> intArray;
    for (int i = 0; i < 5; i++) {
        intArray.set(i, i);
    }
    for (int i = 0; i < 5; i++) {
        cout << intArray.get(i) << " ";
    }
    cout << endl;

    // Тестування шаблону класу Array для масива дійсних чисел
    Array<double, 4> doubleArray;
    doubleArray.set(0, 1.23);
    doubleArray.set(1, 2.34);
    doubleArray.set(2, 3.45);
    doubleArray.set(3, 4.56);
    for (int i = 0; i < 4; i++) {
        cout << doubleArray.get(i) << " ";
    }
    cout << endl;

    // Тестування шаблону класу Array для масива комплексних чисел
    Array<complex<double>, 3> complexArray;
    complexArray.set(0, complex<double>(1.0, 2.0));
    complexArray.set(1, complex<double>(2.0, 3.0));
    complexArray.set(2, complex<double>(3.0, 4.0));
    for (int i = 0; i < 3; i++) {
        cout << complexArray.get(i) << " ";
    }
    cout << endl;
}