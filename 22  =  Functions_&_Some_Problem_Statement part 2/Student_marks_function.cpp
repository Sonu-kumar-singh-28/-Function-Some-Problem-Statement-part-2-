#include<iostream>
using namespace std;

char getgrade( int marks)
{
  
    if( marks >=90)
    {
        cout<<"A";
    }
    else if( marks>=80)
    {
        cout<<" B";
    }
    else if( marks >=70)
    {
        cout<<"C";
    }
    else if( marks>=60)
    {
        cout<<"d";
    }
    else 
    {
        cout<<" E";
    }
    return 0;
}

int main()
{
    int marks;
    cout<<" Enter The Number :";
    cin>>marks;

    char studentmarks = getgrade(marks);

    cout<<studentmarks << endl;
}