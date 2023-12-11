#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        k = 0;
        while (j <= i)
        {
            char ch = 'A' + i + k - 1;
            cout << ch << " ";
            j = j + 1;
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
/*
5
A 
B C 
C D E 
D E F G 
E F G H I 
*/