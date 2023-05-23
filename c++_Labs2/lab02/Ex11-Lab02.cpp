#include <iostream>
#include <fstream>
#include <string>
#include <array>
using namespace std;

int main() {
    int arr[5] = { 11, 27, 32, 45, 54 };

    // create an fstream object for both input and output
    fstream f;

    // open the file for input and output
    f.open("in.txt", ios_base::in | ios_base::out);

    // check if the file was opened successfully
    if (f.is_open()) {
        // write the elements of the array to the file
        for (auto i : arr) {
            cout << "writed to file: " << i << endl;
            f << i << endl;
        }
        // close the file
        f.close();
    }
    else {
        cout << "file is not open";
    }

    cout << endl;

    // create an ifstream object for reading from the file
    ifstream readFile("in.txt");
    string line;

    // check if the file was opened successfully
    if (readFile.is_open()) {
        // read each line of the file and print it to the console
        while (getline(readFile, line)) {
            cout << "readed: " << line << endl;
        }
        // close the file
        readFile.close();
    }
    else {
        cout << "file is not open";
    }

    return 0;
}
