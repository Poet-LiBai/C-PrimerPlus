//ourfunc.cpp -- defining your own function
#include <iostream>
void simon(int);    // 函数原型声明 function prototype for simon()

int main()
{
    using namespace std;
    simon(3);       // 调用simon()函数，并传入参数3  call the simon() function
    cout << "Pich an integer:";
    int count;
    cin >> count;
    simon(count);   // 再次调用simon()函数，传入参数count call the simon() again
    cout << "Done !" << endl;
    return 0;
}

void simon(int n)   // 定义simon()函数，define simon() function
{
    using namespace std;
    cout << "Simon says touch your toes " << n << " times." << endl;
}                   //void 返回 ，不用添加return语句 void function don't need return statements