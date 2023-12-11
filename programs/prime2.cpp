#include <iostream>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    for (long long int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            cout << "Not Prime" << endl;
            break;
        }
        else
        {
            cout << "Prime" << endl;
            break;
        }
    }
    cout << sizeof(long long int) << endl;
}