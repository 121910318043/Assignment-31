#include<iostream>
using namespace std;
class Person
{
protected:
    char name[20];
    char address[100];
    int Phoneno;
};
class Employee:public Person
{
protected:
    int eno;
};
class Manager:public Employee
{
private:
    Manager *p=NULL;
    char designation[20];
    char departmentName[20];
    int BasicSalary;
    int size;
public:
    void EnterManagers()
    {
        cout<<"How many Managers You Want To Enter? : ";
        cin>>size;
        free(p);
        p = (Manager*)malloc(sizeof(Manager)*size);
        cin.ignore();
        for(int i=0;i<size;i++)
        {
            p[i].inputManager();
        }
        int max=0,emp=0;
        for(int i=0;i<size;i++)
        {
            cout<<endl;
            if((p[i].BasicSalary) > max)
            {
                max = p[i].BasicSalary;
                emp = i;
            }
        }
        cout<<"Manager With Highest Salary is : "<<max<<"And, Manager Name is : "<<p[emp].name;
    }
private:
    void inputManager()
    {
        cout<<"Enter Details of Manager: ";
        cout<<endl;
        cout<<"Enter Employee No: ";
        cin>>eno;
        cin.ignore();
        cout<<endl;
        cout<<"Enter Name : ";
        cin>>name;
        cin.ignore();
        cout<<endl;
        cout<<"Enter Address : ";
        cin>>address;
        cin.ignore();
        cout<<endl;
        cout<<"Enter PhoneNo : ";
        cin>>Phoneno;
        cin.ignore();
        cout<<endl;
        cout<<"Enter Designation : ";
        cin>>designation;
        cin.ignore();
        cout<<endl;
        cout<<"Enter Department Name : ";
        cin>>departmentName;
        cin.ignore();
        cout<<endl;
        cout<<"Basic Salary : ";
        cin>>BasicSalary;
        cin.ignore();
    }
};
int main()
{
    Manager M;
    M.EnterManagers();
    return 0;
}
