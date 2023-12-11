#include <iostream>
using namespace std;

int main()
{
    int n = 10;

    int a = 0;
    int b = 1;
    cout<<"0\n1"<<endl;
    for (int i = 1; i <= 45; i++)
    {
        int nextnum = a + b;
        cout << nextnum << endl;

        a = b;
        b = nextnum;
    }
}