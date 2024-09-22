#include <iostream>
using namespace std;
int main(){
    //  Fahrenheit to celsius
/*
    cout << "Fahrenheit: ";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius;
*/
    // celsius to fahrenheit

    cout << "Celsius: ";
    double celsius;
    cin >> celsius;
    int fahrenheit = (celsius + 32) * 1.8;
    cout << fahrenheit;



    return 0;
}