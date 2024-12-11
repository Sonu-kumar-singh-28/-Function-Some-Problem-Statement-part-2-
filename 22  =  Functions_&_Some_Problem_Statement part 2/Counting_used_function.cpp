#include <iostream>
using namespace std;

int count( int num)
{
    for ( int i=0; i<=num; i++)
    {
        cout<<"The Counting Of N Number Is:" <<i<<endl;
    }
    return 0;
}

int main()
{
    int num;

    cout<<"Enter THe Value: ";
    cin>>num;

    int countnum = count(num);
    
    cout<<"The CountNum Address Are Stored :" << &countnum <<endl;
}