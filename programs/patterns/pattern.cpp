#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int i = 0;
    int j = 0;
    cout << "Enter no of rows: " << endl;
    cin >> n;
    cout << "Enter no of coloumns: " << endl;
    cin >> m;

    while (i < n)
    {
        int j = 0;
        while (j < m)
        {
            cout << "* ";
            j = j + 1;
        }
        cout<<endl;
        i = i + 1;
    }
}
/*
prints this:
Enter no of rows: 
5
Enter no of coloumns: 
5
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * * 
*/