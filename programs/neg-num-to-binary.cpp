#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        n = n * (-1);
        // ignoring the -ve sign

        int arr[32];
        // initialization of arr[32] equal to 0
        for (int k = 0; k < 32; k++)
        {
            arr[k] = 0;
        }
        // finding the +ve binary of n and storing it in arr[32]
        int i = 31;
        while (n != 0 || i != -(1))
        {
            arr[i] = n & 1;
            n = n >> 1;
            i--;
        }
        cout << "Binary of +ve no is: ";
        for (int l = 0; l < 32; l++)
        {
            cout << arr[l];
        }
        cout << endl;
        for (int m = 31; m >= 0; m--)
        {
            if (arr[m] == 1)
            {
                cout << "Binary of -ve no is: ";
                for (int o = 0; o < m; o++)
                {
                    cout << !(arr[o]);
                }
                for (int q = m; q < 32; q++)
                {
                    cout << arr[q];
                }
                break;
            }
        }
    }
    else
    {
        cout << "Binary of +ve no "<<n<<" is: ";
        int arr[32];
        for (int k = 0; k < 32; k++)
        {
            arr[k] = 0;
        }
        int i = 31;
        while (n != 0 || i != -(1))
        {
            arr[i] = n & 1;
            n = n >> 1;
            i--;
        }
        for (int l = 0; l < 32; l++)
        {
            cout << arr[l];
        }
    }
    cout << endl;
}