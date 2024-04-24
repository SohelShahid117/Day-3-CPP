// 3.1 Break and Continue statement in C++ Programming | Guaranteed Placement Course | Lecture 3.1
#include <iostream>
using namespace std;
int main()
{
    // cout << "going out even day of this month" << endl;
    int pocketMoney = 5000;
    for (int day = 1; day <= 30; day++)
    {
        if (day % 2 == 0)
        {
            continue; // skip to the next iteration of the loop
        }
        if (pocketMoney == 0)
        {
            break; // terminate or stop or break the loop
        }
        cout << day << " . "
             << "going out odd day of this month.day" << endl;
        pocketMoney = pocketMoney - 500;
    };

    cout << "print the nmbr from 1 to 100 without the nmbr divisble by 3 are :" << endl;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        // cout << i << endl;
        cout << i << "  ";
    }

    cout << "\nprint the prime/non prime number" << endl;
    int n;
    cout << "enter an integer number :";
    cin >> n;
    int i;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is not a prime number" << endl;
            break;
        }
    };
    if (i == n)
    {
        cout << n << " is a prime number" << endl;
    }

    cout << "print the all prime number from a to b" << endl;
    // 7min

    return 0;
}