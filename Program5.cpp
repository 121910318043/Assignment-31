#include<iostream>
using namespace std;
class Item
{
protected:
    int itemNo;
    char name[20];
    float price;
};
class Discounted:public Item
{
private:
    Discounted *p=NULL;
    int Discount;
    int size=1;
public:
    void InputItems()
    {
        int TotalPrice=0;
        float TotalDiscount=0;
        cout<<"How many Items you want to Enter? : ";
        cin>>size;
        delete p;
        p = new Discounted[size];
        for(int i=0;i<size;i++)
        {
            p[i].input();
        }
        cout<<endl;
        for(int i=0;i<size;i++)
        {
            p[i].showData();
            TotalPrice = p[i].price + TotalPrice;
            TotalDiscount = ((float)(p[i].Discount*p[i].price)/100.0) + (float)TotalDiscount;
        }
        cout<<endl;
        cout<<"Total Price : "<<TotalPrice;
        cout<<endl;
        cout<<"Total Discount : "<<TotalDiscount;
    }

    void showData()
    {
        cout<<endl;
        cout<<"Item name : "<<name;
        cout<<endl;
        cout<<"Item No : "<<itemNo;
        cout<<endl;
        cout<<"Item Price : "<<price;
        cout<<endl;
        cout<<"Discount Percent : "<<Discount;
        cout<<endl;
        cout<<"Discounted Price : "<<((float)Discount*(float)(price))/100.0;
        cout<<endl;
    }
    void input()
    {
        cout<<endl;
        cout<<"Enter Item Name : ";
        cin>>name;
        cin.ignore();
        cout<<"Enter Item No : ";
        cin>>itemNo;
        cin.ignore();
        cout<<"Enter Price : ";
        cin>>price;
        cin.ignore();
        cout<<"Enter Discount : ";
        cin>>Discount;
        cin.ignore();
    }
};
int main()
{
    Discounted D;
    D.InputItems();
    return 0;
}
