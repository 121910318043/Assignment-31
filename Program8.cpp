#include<iostream>
using namespace std;
class Customer
{
protected:
    char name[20];
    int phoneNumber;
};
class Depositor:public Customer
{
protected:
    int acc_no;
    int balance;

    void EnterCustomerDetails()
    {
        cout<<"Enter Customer Name :";
        cin>>name;
        cout<<"Enter Customer Phone No :";
        cin>>phoneNumber;
        cout<<"Enter Account Number :";
        cin>>acc_no;
        cout<<"Enter Customer Balance :";
        cin>>balance;
    }
};
class Borrower:public Depositor
{
private:
    int loan_no;
    int loan_amount;
public:
    void EnterDetail()
    {
        EnterCustomerDetails();
        cout<<"Enter Loan No : ";
        cin>>loan_no;
        cout<<"Enter Loan Amount : ";
        cin>>loan_amount;
        cout<<"------------------"<<endl;
    }
    void GetDetails()
    {
        cout<<"Customer Name : "<<name;
        cout<<endl<<"Customer Phone No : "<<phoneNumber;
        cout<<endl<<"Customer A/c no   : "<<acc_no;
        cout<<endl<<"Balance           : "<<balance;
        cout<<endl<<"------------------";
        cout<<endl<<"Loan No           : "<<loan_no;
        cout<<endl<<"Loan Amount       : "<<loan_amount;
        cout<<endl<<"------------------"<<endl;
    }
};
int main()
{
    Borrower *B;
    int size;
    cout<<"Enter No of Customer Details you want : ";
    cin>>size;
    B=new Borrower[size];
    for(int i=0;i<size;i++)
    {
        B[i].EnterDetail();
    }
    for(int i=0;i<size;i++)
    {
        B[i].GetDetails();
    }
    return 0;
}
