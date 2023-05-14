#include <iostream>
using namespace std;

void printArray()
{
}

int main()
{
    // declaring
    int number[15];

    // accessing an array
    cout << "Value at 14 index " << number[14] << endl;

    /*
    YOu can't acces an array of any size which you haven't initiaised, like
    cout << "Value at 20 index " << number[20] << endl;
    */

    int third[15] = {2, 5};
    cout << "Value of second is " << third[0] << endl;
    int n = 15;
    for (int i = 0; i <= n; i++)
    {
        cout << third[i] << " ";
    }
        cout<<endl;

    // initializing an array
    int second[3] = {3, 5, 7};
    cout << "Value of second is " << second[2] << endl;
}