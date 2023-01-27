#include<iostream>
using namespace std;
class Employee
{
protected:
    int emp_code;
    char name[20];

    void SetData()
    {
        cout<<"Enter Employee Name : ";
        cin>>name;
        cout<<"Enter Employee Code : ";
        cin>>emp_code;
    }
};
class FullTime:public Employee
{
private:
    float dailyrate;
    int number_of_days;
    float Salary = 0.0f;
public:
    void EnterEmployee()
    {
        SetData();
        cout<<"Enter Daily Rate : ";
        cin>>dailyrate;
        cout<<"Enter No of Days : ";
        cin>>number_of_days;
    }
    void ShowData()
    {
        cout<<"----------------------"<<endl;
        cout<<"Employee Number : "<<emp_code<<endl;
        cout<<"Employee Name   : "<<name<<endl;
        cout<<"Salary          : "<<(dailyrate*number_of_days)<<endl;
        cout<<"Status          : FullTime"<<endl;
        cout<<"----------------------"<<endl;
    }
    int get_Employee_id()
    {
        return emp_code;
    }
};
class PartTime:public Employee
{
private:
    int no_of_workingHours;
    int Hourly_Rate;
    float Salary = 0.0f;
public:
    void EnterEmployee()
    {
        SetData();
        cout<<"Enter Hourly Rate : ";
        cin>>Hourly_Rate;
        cout<<"Enter number of Working Hours : ";
        cin>>no_of_workingHours;
    }
    void ShowData()
    {
        cout<<"----------------------"<<endl;
        cout<<"Employee Number : "<<emp_code<<endl;
        cout<<"Employee Name   : "<<name<<endl;
        cout<<"Salary          : "<<(no_of_workingHours*Hourly_Rate)<<endl;
        cout<<"Status          : PartTime"<<endl;
        cout<<"----------------------"<<endl;
    }
    int get_Employee_id()
    {
        return emp_code;
    }
};
int main()
{
    FullTime *F;
    PartTime *P;
    int fsize,psize;
    cout<<"Enter How Many Full Time Employees You Want To Enter : ";
    cin>>fsize;
    F = new FullTime[fsize];
    cout<<"Enter How Many Part Time Employees You Want To Enter : ";
    cin>>psize;
    P = new PartTime[psize];
    int x,findex=0,pindex=0;
    do
    {
        cout<<"1.Enter Record"<<endl;
        cout<<"2.Display Record"<<endl;
        cout<<"3.Search Record"<<endl;
        cout<<"4.Quit"<<endl;
        cin>>x;
        switch(x)
        {
        case 1:
            int y;
            cout<<endl;
            cout<<endl<<"Press 1 for Full Time: ";
            cout<<endl<<"Press 2 for Part Time: ";
            cout<<"Enter Which Time Employee you Want To Enter : ";
            cin>>y;
            switch(y)
            {
            case 1:
                F[findex].EnterEmployee();
                findex++;
                break;
            case 2:
                P[pindex].EnterEmployee();
                pindex++;
                break;
            default:
                cout<<"Please Enter Valid Employee Time";
                break;
            }
            break;
        case 2:
            for(int i=0;i<findex;i++)
            {
                F[i].ShowData();
            }
            for(int i=0;i<pindex;i++)
            {
                P[i].ShowData();
            }
            break;
        case 3:
            int search;
            cout<<"Enter Employee Number or id : ";
            cin>>search;
            for(int i=0;i<findex;i++)
            {
                if(F[i].get_Employee_id() == search)
                    F[i].ShowData();
            }
            for(int i=0;i<findex;i++)
            {
                if(P[i].get_Employee_id() == search)
                    P[i].ShowData();
            }
            break;
        case 4:
            free(F);
            free(P);
            return 0;
        default:
            cout<<"Please Enter a Valid Option: ";
            break;
        }
    }while(x!=4);
    return 0;
}
