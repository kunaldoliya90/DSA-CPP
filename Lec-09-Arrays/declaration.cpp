#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Printing done" << endl;
}
int main()
{
    // declaration
    int number[15];
    // accesing an array
    cout << number[15] << endl;
    // initialosing an array
    int second[3] = {5, 7, 11};
    cout << second[2] << endl;

    int third[15] = {2, 7};
    /*
    If we have to access an array there is only an option available
    i.e. third[2], means first tpe name of an array then
    type index value...
    array_name[_];
    */
    int n = 15;
    for (int i = 0; i < n; i++)
    {
        cout << third[i];
    }
    cout << endl;

    // Array no - 4
    int fourth[10] = {0};
    int m = 10;
    for (int i = 0; i < m; i++)
    {
        cout << fourth[i];
    }
    cout << endl;

    // Array no - 5
    int fifth[10] = {1};
    int p = 10;
    for (int i = 0; i < p; i++)
    {
        cout << fifth[i];
    }
}