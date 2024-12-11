#include<iostream>
using namespace std;

int evensum(int n)
{
    int sum=0;

    for( int i=2; i<=n; i= i+2)
    {
        sum= sum+i;
    }
    return sum;

}

int main()
{
    int n;

    cout<<" Enter The Number : ";
    cin>> n;

    int sumnu = evensum( n);
    
    cout<<" The Number Are Entered:"<< n<< " is: "<< sumnu << endl;
}