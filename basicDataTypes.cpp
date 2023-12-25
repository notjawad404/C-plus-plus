// Basic Data Types with float up to 3 decimal places and double up to 9 decimal places

#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;

int main() {
    int num;
    long longint;
    char ch;
    float floatnum1;
    double doublenum2;
    
    cin>> num>> longint >> ch >> floatnum1 >> doublenum2;
    
    cout << num <<endl;
    cout << longint <<endl ;
    cout << ch <<endl;
    cout << fixed << setprecision(3)<< floatnum1 << endl;
    cout <<fixed <<setprecision(9) << doublenum2;

    
    return 0;
}
