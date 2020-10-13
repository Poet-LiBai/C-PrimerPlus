//getinfo.cpp -- input and output
//uses and displays a variable

#include <iostream>

int main()
{
    using namespace std;

    int carrots;                // declare an integer variable

    cout << "How many carrots do you have?" << endl;
    cin >> carrots;             // C++ input
    carrots = carrots + 2;
    // the next line concatenates output
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}