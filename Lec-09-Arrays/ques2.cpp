#include<iostream>
using namespace std;

/*
Print sum of all element given in an array.

*/

void sumfun(int sum[], int n){
    int finalsum=0;
    for(int i=0; i<n; i++){
        finalsum=finalsum+i;
    }
    cout<<finalsum;
}

int main()
{
    int size;
    cout<<"Enter the size of array : ";
    cin>>size;

    int sum[1000];
    for(int i = 0; i<size; i++){
        cin>>sum[i];
    }
    cout<<sumfun;
}
