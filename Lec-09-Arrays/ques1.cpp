#include <iostream>
#include <climits>

using namespace std;

/*
Ques - An array is given of type int what we have to do is we have to find the mazimum element and minimum element in a given array
e.g. int givenArray[10] = {1,2,3,4,5,6,7,8,9,0}
o/p - Maximum element is 9, Minimum element is 0.
*/

int getMax(int num[], int n)
{

    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }
    return max;
}

int getMin(int num[], int n)
{

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    return min;
}

int main()
{
    /*
    int size;
    cin>>size;

    int num[size];
    bad practice taking a variable sized array.
    */

    int size;
    cin >> size;

    int num[100];

    // Taking input in an array
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Maximum vallue is " << getMax(num, size) << endl;
    cout << "Minimum vallue is " << getMin(num, size) << endl;
}