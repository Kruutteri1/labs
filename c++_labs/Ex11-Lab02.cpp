#include <iostream>

//option 11 Determine whether there is a rhombus with given sides a, b, c, d.
int main() {
        int a, b, c, d;


        std::cout << "Enter a:";
        std::cin >> a;
        std::cout << "Enter b:";
        std::cin >> b;
        std::cout << "Enter c:";
        std::cin >> c;
        std::cout << "Enter d:";
        std::cin >> d;


        if ((a == b) && (a == c) && (a == d)) { 
                std::cout << "YES";
        }
        else {
                std::cout << "NO";
        }
        return 0;
}