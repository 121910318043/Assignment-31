#include<iostream>
using namespace std;
class worker
{
protected:
    int code;
    char name[20];
    float salary;
     void EnterWorker()
     {
         cout<<"Enter Code : ";
         cin>>code;
         cout<<endl;
         cout<<"Enter Name : ";
         cin>>name;
         cout<<endl;
         cout<<"Enter Salary : ";
         cin>>salary;
         cout<<endl;
     }
};
class Officer
{
protected:
    float DA;
    float HRA;
    void EnterOfficer()
    {
        cout<<"Enter DA : ";
        cin>>DA;
        cout<<endl;
        cout<<"Enter HRA : ";
        cin>>HRA;
        cout<<endl;
    }
};
class Manager:public worker,public Officer
{
public:
    void TakeManager()
    {   cout<<"Enter Manager Information : ";
        cout<<endl;
        cout<<"-----------------------------";
        cout<<endl;
        EnterWorker();
        EnterOfficer();
    }
    void ManagerInfo()
    {
        cout<<"-----------------------------";
        cout<<endl;
        cout<<"Manager Information ";
        cout<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"Code         : "<<code<<endl;
        cout<<"Name         : "<<name<<endl;
        cout<<"Salary       : "<<salary<<endl;
        cout<<"DA           : "<<DA<<endl;
        cout<<"HRA          : "<<HRA<<endl;
        cout<<"TA           : "<<(salary*0.1)<<endl;
        cout<<"Gross Salary : "<<(salary+DA+HRA+(salary*0.1))<<endl;
    }
};
int main()
{
    Manager *M;
    int size;
    cout<<"Enter Size Of Managers : ";
    cin>>size;
    M = new Manager[size];
    for(int i=0;i<size;i++)
    {
        M[i].TakeManager();
    }
    for(int i=0;i<size;i++)
    {
        M[i].ManagerInfo();
    }
    return 0;
}
