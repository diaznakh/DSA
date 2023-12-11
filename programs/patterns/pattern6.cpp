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
        while (j <= n)
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
prints this:
5
A B C D E 
B C D E F 
C D E F G 
D E F G H 
E F G H I 
*/