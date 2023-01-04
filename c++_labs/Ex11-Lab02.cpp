#include <iostream>




// âàð³àíò 11 Âèçíà÷èòè, ÷è ³ñíóº ðîìá ç çàäàíèìè ñòîðîíàìè a, b, c, d.
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


        if ((a == b) && (a == c) && (a == d)) { // ÷åðåç óñëîâíûé îïåðàòîð éäå ïåðåâ³ðêà ÷è ³ñíóº ðîìá ç çàäàíèìè ñòîðîíàìè.
                std::cout << "YES";
        }
        else {
                std::cout << "NO";
        }
        return 0;
}