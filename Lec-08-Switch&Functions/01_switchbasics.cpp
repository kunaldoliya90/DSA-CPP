#include <iostream>
using namespace std;

// int main()
// {
//     int num = 21;
//     cout << endl;

//     switch (num)
//     {
//     case 1:
//         cout << "First" << endl;
//         break;

//     case 21:
//         cout << "Second" << endl;
//         break;

//     default:
//         cout << "It is default case" << endl;
//         break;
//     }
// }

// using switch inside switch

// int main()
// {
//     int num = 21;
//     char ch = '1';
//     cout << endl;

//     switch (num)
//     {
//     case 1:
//         cout << "First" << endl;
//         break;

//     case 21:
//         switch (ch)
//         {
//         case '1':
//             cout << "Value of num is " << num << endl;
//             break;
//         }
//         break;

//     default:
//         cout << "It is default case" << endl;
//         break;
//     }
// }

/* Code for mini calclulator */

// int main()
// {

//     int a, b;
//     char op;

//     cout << "Enter the value of a : " << endl;
//     cin >> a;
//     cout << "Enter the value of b : " << endl;
//     cin >> b;
//     cout << "Enter the Operation you want to perform : " << endl;
//     cin >> op;

//     switch (op)
//     {
//     case '+':
//         cout << (a + b) << endl;
//         break;

//     case '-':
//         cout << (a - b) << endl;
//         break;
//     case '*':
//         cout << (a * b) << endl;
//         break;
//     case '/':
//         cout << (a / b) << endl;
//         break;
//     case '%':
//         cout << (a % b) << endl;
//         break;
//     }
// }

/*

Homework Question

*/

// int main()
// {
//     int n;
//     cin >> n;

//     int a, b, c, d, e;

//     switch (1)
//     {
//     case 1:
//     {
//         int a = n / 100;
//         n = n % 100;
//         cout << "Total " << a << " is needed" << endl;
//     }
//     // break;
//     case 2:
//     {
//         int b = n / 50;
//         n = n % 50;
//         cout << "Total " << b << " is needed" << endl;
//     }
//         // break;

//     case 3:
//     {
//         int c = n / 20;
//         n = n % 20;
//         cout << "Total " << c << " is needed" << endl;
//     }
//         // break;

//     case 4:
//     {
//         int d = n / 10;
//         n = n % 10;
//         cout << "Total " << d << " is needed" << endl;
//     }
//     // break;
//     case 5:
//     {
//         int e = n / 1;
//         n = n % 1;
//         cout << "Total " << e << " is needed" << endl;
//     }
//         // break;

//     default:
//         break;
//     }
// }

// int main()
// {
//     int amount;
//     cin >> amount;
//     int Rs100, Rs50, Rs20, Rs1;

//     switch (1)
//     {
//     case 1:
//         Rs100 = amount / 100;
//         amount = amount % 100;
//         cout << "No of 100 Rupee =" << Rs100 << endl;

//     case 2:
//         Rs50 = amount / 50;
//         amount = amount % 50;
//         cout << "No of 50 Rupee =" << Rs50 << endl;

//     case 3:
//         Rs20 = amount / 20;
//         amount = amount % 20;
//         cout << "No of 20 Rupee =" << Rs20 << endl;

//     case 4:
//         Rs1 = amount / 1;
//         amount = amount % 1;
//         cout << "No of 1 Rupee =" << Rs1 << endl;
//     }
//     return 0;
// }