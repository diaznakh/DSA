#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter n:"<<endl;
    cin>>n;
    int sum = 0;
    for (int i = 0; i <= n; i++)
    {
        //sum = sum + i;
        sum += i;
    }
    
    cout<<sum<<endl;

}