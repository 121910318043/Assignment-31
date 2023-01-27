#include<iostream>
using namespace std;
//Inheritance
class Person
{
private:
    char name[30];
    int age;
public:
    void SetName()
    {
        cout<<"Enter Name : ";
        cin>>name;
        cin.ignore();
    }
    void setAge()
    {
        cout<<"Enter Age : ";
        cin>>age;
    }
    void getName()
    {
        cout<<"Name : "<<name;
    }
    void getAge()
    {
        cout<<"Age : "<<age;
    }
};
class Employee:public Person
{
private:
    int empId;
    float salary;
public:
    void setEmpid()
    {
        cout<<"Enter Employee Id : ";
        cin>>empId;
    }
    void setSalary()
    {
        cout<<"Enter Salary : ";
        cin>>salary;
    }
    void getEmpId()
    {
        cout<<"Employee Id : "<<empId;
    }
    void getSalary()
    {
        cout<<"Salary : "<<salary;
    }
};
int main()
{
    Employee E1;
    E1.SetName();
    E1.setAge();
    E1.setEmpid();
    E1.setSalary();
    E1.getName();
    cout<<endl;
    E1.getAge();
    cout<<endl;
    E1.getEmpId();
    cout<<endl;
    E1.getSalary();
    return 0;
}
