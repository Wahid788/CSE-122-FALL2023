#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter any 3 number";
    cin>>a>>b>>c;
    if(a>b && c<a)
    {
        cout<<"the largest number" <<a;

    }
    if (a<b && b>c)
    {cout<<"the largest number"<<b;}
    else
        cout<<"the largest number"<<c;
    return 0;
}
