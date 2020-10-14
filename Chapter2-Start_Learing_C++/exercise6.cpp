#include <iostream>
using namespace std;

double lightyear2astronomical(double lightyears);

int main()
{
    double lightyears;
    cout << "Enter the number of light years: ";
    cin >> lightyears;
    double astronomical_units;
    astronomical_units = lightyear2astronomical(lightyears);
    cout << lightyears << " light years = " << astronomical_units << " astronomical units." << endl;
    return 0;

}

double lightyear2astronomical(double lightyears)
{
    return lightyears * 63240;
}