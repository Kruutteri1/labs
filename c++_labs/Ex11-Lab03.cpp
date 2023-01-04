#include <iostream>


// Âàð³àíò 11 Ï³äâåñòè ÷èñëî n ó ñòóï³íü m.
int main() {
        double n, m, res;


        std::cout << "Enter n:";
        std::cin >> n;
        std::cout << "Enter m:";
        std::cin >> m;
        
        res = pow(n, m);
        std::cout << res;
}