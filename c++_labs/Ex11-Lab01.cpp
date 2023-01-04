#include <iostream>

//option 11 Determine the area and perimeter of a square with side a.
int main() {
    int a, S, P;


    std::cout << "Enter a:";
    std::cin >> a;
    S = a * a; 
    P = 4 * a; 
    std::cout << S << "\n" << P; 
}