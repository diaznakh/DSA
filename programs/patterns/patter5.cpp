#include<iostream>
using namespace std;

int main()
{
    int n,var;
    cin>>n;
    var = 0;

    int i =1;
    while (i<=n)
    {
        
        int j =1;
        while (j<=n)
        {
            char ch = 'A' + var;
            cout<<ch<<" ";
            j=j+1;
            var = var +1;
        }
        cout<<endl;
        i=i+1;
    }
}
/*
prints this:
6
A B C D E F 
G H I J K L 
M N O P Q R 
S T U V W X 
Y Z [ \ ] ^ 
_ ` a b c d
*/