#include<iostream>
using namespace std;
class Base
{
protected:
    int a;
    int b;
};
class Derived:public Base
{
public:
    void SetData()
    {
        cout<<"Enter A value ";
        cin>>a;
        cout<<"Enter B value ";
        cin>>b;
    }
    void SumDisplay()
    {
        cout<<"Sum of a & b : "<<a+b;
    }
};
int main()
{
    Derived A;
    A.SetData();
    A.SumDisplay();
    return 0;
}
