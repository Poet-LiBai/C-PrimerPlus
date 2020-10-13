#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    int month;
    month = 12 * age;
    cout << "Your age amount to: " << month << " months" << endl;
}