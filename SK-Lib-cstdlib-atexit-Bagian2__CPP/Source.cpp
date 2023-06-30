#include <iostream>
#include <cstdlib>
#include <conio.h>

/*
    Source by GeeksForGeeks (https://www.geeksforgeeks.org)
    Modified For Learn by RK
    I.D.E : VS2022
*/

using namespace std;

void done(){
    cout << "Exiting Successfully" << "\n"; 
}

int main() {
    int value;
    value = atexit(done);

    if (value != 0) {
        cout << "atexit () function registration failed";
        exit(1);
    }
    cout << " Registration successful" << "\n"; 

    _getch();
    return 0;
}