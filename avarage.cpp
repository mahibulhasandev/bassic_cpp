#include <iostream>
using namespace std;
int main() {
    float num, num1, average, sum;
    cout<< "Enter Two Numbers: ";
    cin >> num >> num1;
    sum = num + num1;
    cout << "Sum = " << sum;
    average = sum / 2;
    cout << "\naverage = " << average;
    return 0;
}