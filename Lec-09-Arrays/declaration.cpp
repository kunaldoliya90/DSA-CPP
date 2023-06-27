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

void printArraychar(char arr[], int size)
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

    /*
    If we have to access an array there is only an option available
    i.e. third[2], means first tpe name of an array then
    type index value...
    array_name[_];
    */
    int third[15] = {2, 7};
    int n = 15;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << third[i];
    // }
    printArray(third, 15);
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
    printArray(fifth, 10);

    // Getting Size of array
    int fifthSize = sizeof(fifth)/sizeof(int);
    cout<<fifthSize<<endl;


    char ch1[5] = {'a','b','c','d','e'};
    // cout<<ch1[3];
    printArraychar(ch1, 5);
}