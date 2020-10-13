#include <iostream>
using namespace std;

float celsius2fahrenheit(float celsius);

int main()
{
    float celsius;
    cout << "Please enter a Celsius value: ";
    cin >> celsius;

}

float celsius2fahrenheit(float celsius)
{
    return celsius * 1.8 + 32.0;
}