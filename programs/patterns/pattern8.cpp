#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        int k = 1;
        int j = 1;
        while (space)
        {
            cout << "  ";
            space = space - 1;
        }
        while (k <= i)
        {
            cout << "* ";
            k = k + 1;
        }
        cout << endl;
        i = i + 1;
    }
}
/*
will print this:
5
        * 
      * * 
    * * * 
  * * * * 
* * * * * 
*/