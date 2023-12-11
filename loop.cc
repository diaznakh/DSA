#include <iostream>
using namespace std;

int main()
{
    int a, sum;
    sum = 0;
    cin >> a;
    while (a > 1)
    {
        if ((a % 2) == 0)
        {
            sum = sum + a;
        }
        a = a - 1;
    }
    cout << sum << endl;
}