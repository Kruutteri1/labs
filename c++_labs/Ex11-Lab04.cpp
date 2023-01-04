#include <iostream>
//A one-dimensional array A(10) is given. Find the product of all non-negative elements of the array.
int main() {
        const int MaxN = 10; //array size
        int A[MaxN]; //we create an array of size MaxN




        std::cout << "Enter ten numbers: "; 
        std::cin >> A[0];
        std::cin >> A[1];
        std::cin >> A[2];
        std::cin >> A[3];
        std::cin >> A[4];
        std::cin >> A[5];
        std::cin >> A[6];
        std::cin >> A[7];
        std::cin >> A[8];
        std::cin >> A[9];




        int i = 0;
        int sum = 0; 


        while (i < MaxN) { 
                if (A[i] > 0) { 
                        sum += A[i]; 
                }
                i++;
        }
        std::cout << sum;
}