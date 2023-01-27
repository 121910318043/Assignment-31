#include<iostream>
using namespace std;
class C2;
class C1
{
private:
    int a=1;
public:
    void ShowData()
    {
        cout<<a;
    }
    friend void Exchange(C1&,C2&);
};
class C2
{
private:
    int a=2;
public:
    void ShowData()
    {
        cout<<a;
    }
    friend void Exchange(C1&,C2&);
};
void Exchange(C1 &c1,C2 &c2)
{
    int temp;
    temp = c1.a;
    c1.a = c2.a;
    c2.a = temp;
}
int main()
{
    C1 c;
    C2 c1;
    c.ShowData();
    cout<<endl;
    c1.ShowData();
    Exchange(c,c1);
    cout<<endl;
    c.ShowData();
    cout<<endl;
    c1.ShowData();
    return 0;
}
