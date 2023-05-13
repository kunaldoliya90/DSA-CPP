#include <iostream>
using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter the value of n : ";
//     cin >> n;
//     cout << "printing the counting from 1 to n." << endl;

//     for (int i = 1; i <= n; i++)
//     {
//         cout << i << endl;
//     }
// }

/*

Find sum from 1 to n

*/

// int main()
// {
//     int n;
//     cin >> n;

//     int sum = 0;

//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     cout << sum;
// }

/*

Fibonacci series
0,1,1,2,3,5,8,13,21,34---------
[ Pichle do number ka sum next wala number hota hai ]
e.g -> 0+1=1, 1+1=2, 2+1=3, 2+3=5, 5+8=13, 13+8=21

n = (n-1) + (n-2)

*/

// int main()
// {
//     int n;
//     cin >> n;

//     int a = 0;
//     int b = 1;
//     cout << a << " " << b << " ";

//     for (int i = 1; i <= n; i++)
//     {
//         int nextNum = a + b;
//         cout << nextNum << " ";

//         a = b;
//         b = nextNum;
//     }
// }

/*

Prime Number
e.g - check if 7 is a prime number or not
concept
[1-> ko chodkar or 7 ko chodkar sabse dic=vide karenge]

1 2 3 4 5 6 7
^ / / / / / ^

and check remainder zero na aaye
means n%i==0, for any number except 1 and 7 then it's not prime number

*/

// #Using Break

// int main()
// {
//     int n;
//     cin >> n;

//     for (int i = 2; i < n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "Not Prime" << endl;
//             break;
//         }
//         else
//         {
//             cout << "Prime" << endl;
//             break;
//         }
//     }
// }

/*

To skip the particular iteration we use 'continue', just like a break...



*/

// int main()
// {
//     for (int i = 0; i <= 15; i += 2)
//     {
//         cout << i << " ";

//         if (i & 1)
//         {
//             continue;
//         }
//         i++;
//     }
// }

/*

variables & Scope

*/