#include<iostream>
using namespace std;

int getsum(int n)
{
    int sum=0;

    for( int i=0; i<=n; i++)
    {
      sum= sum+i;
    }

    return sum;

}

int main()
{
    int n;
    cout<<" Enter The Value Of n:";
    cin>> n;

    int ans = getsum(n);

    cout<< " Sum Of Number "<< n <<" is :" << ans <<endl;
}