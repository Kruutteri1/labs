#include <iostream>


//Option 11 Raise the number n to the m power.
int main() {
        double n, m, res;


        std::cout << "Enter n:";
        std::cin >> n;
        std::cout << "Enter m:";
        std::cin >> m;
        
        res = pow(n, m);
        std::cout << res;
}