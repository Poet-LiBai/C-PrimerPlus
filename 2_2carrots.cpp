//carrots.cpp -- food processing program
//uses and displays a variable

#include <iostream>

int main()
{
    using namespace std;

    int carrots;                // declare an integer variable

    carrots = 25;               // assign a value to the variable
    cout << "I have ";
    cout << carrots;
    cout << " carrots.";
    cout << endl;
    carrots = carrots - 1;      // modify the valiable
    cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;
    return 0;
}