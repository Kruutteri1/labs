#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


//Option 11 Given a two-dimensional array of N*N integers. Multiply the matrix by itself (according to the rules of matrix multiplication – use square matrices).


// I believed that the filling of the array or matrix was done randomly, and not set by the user, in my opinion it looks a little better and more interesting


int main() {
    srand((int)time(0));


    int n;
    cout << "Enter n: "; //matrix size
    cin >> n;
   




    //we create an array that will be randomly filled
    double** a = new double* [n];
    for (int i = 0; i < n; i++)
        a[i] = new double[n];


    //the array is the answer, that is, the matrix multiplied by itself
    double** c = new double* [n];
    for (int i = 0; i < n; i++)
        c[i] = new double[n];


    
    //fill the array with random numbers and its output (all numbers no more than 9)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            a[i][j] = rand() % 9 + 1; 
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }


    //first filled the array with zeros.
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            
        }
    }


    cout << "\n";
  
    //multiplication of matrices and derivation of the solution
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int g = 0; g < n; g++) {
                c[i][j] += a[i][g] * a[g][j];
            }
            cout << c[i][j] << " ";
        }
        cout << "\n";


    }


    


    
}