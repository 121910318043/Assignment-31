#include<iostream>
using namespace std;
class Student
{
protected:
    int id;
    char name[20];
};
class StudentExam:public Student
{
public:
    int s1,s2,s3,s4,s5,s6;
    void EnterMarks()
    {
        cout<<"-------------------";
        cout<<endl;
        cout<<"Enter Roll No            : ";
        cin>>id;
        cout<<"Enter Student Name       : ";
        cin>>name;
        cout<<"Enter Marks for Subject1 : ";
        cin>>s1;
        cout<<"Enter Marks for Subject2 : ";
        cin>>s2;
        cout<<"Enter Marks for Subject3 : ";
        cin>>s3;
        cout<<"Enter Marks for Subject4 : ";
        cin>>s4;
        cout<<"Enter Marks for Subject5 : ";
        cin>>s5;
        cout<<"Enter Marks for Subject6 : ";
        cin>>s6;
    }
};
class StudentResult:public StudentExam
{
private:
    float percentage;
public:
    void CalculatePercentage()
    {
        cout<<endl;
        cout<<"----------------------------"<<endl;
        cout<<"******Student MarkList******"<<endl;
        cout<<"----------------------------"<<endl;
        cout<<endl;
        cout<<"Marks of Subject1 : "<<s1;
        cout<<endl;
        cout<<"Marks of Subject2 : "<<s2;
        cout<<endl;
        cout<<"Marks of Subject3 : "<<s3;
        cout<<endl;
        cout<<"Marks of Subject4 : "<<s4;
        cout<<endl;
        cout<<"Marks of Subject5 : "<<s5;
        cout<<endl;
        cout<<"Marks of Subject6 : "<<s6;
        cout<<endl<<endl;
        percentage = s1 + s2 + s3 + s4 + s5 + s6;
        percentage = (percentage*100.0)/600.0;
        cout<<"Total Percentage : "<<percentage;
    }
};
int main()
{
    StudentResult *S;
    cout<<"Enter No Of Students You Want : ";
    int size;
    cin>>size;
    S=new StudentResult[size];
    for(int i=0;i<size;i++)
        S[i].EnterMarks();
    for(int i=0;i<size;i++)
        S[i].CalculatePercentage();
    return 0;
}
