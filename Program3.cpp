#include<iostream>
using namespace std;
class Subjects{
protected:
    int physics;
    int chemistry;
    int maths;
public:
    void EnterMarks()
    {
        cout<<"Enter Marks Of Physics : ";
        cin>>physics;
        cout<<"Enter Marks of Chemistry : ";
        cin>>chemistry;
        cout<<"Enter Marks of Maths : ";
        cin>>maths;
    }
};
class TotalMarks:public Subjects
{
    public:
    int totalMarks()
    {return physics+chemistry+maths;}
};
class Student:public TotalMarks
{
    public:
    void ShowPercentage()
    {
        int per;
        per = (totalMarks()*100)/300;
        cout<<"Percentage : "<<per<<"%";
    }
};
int main()
{
    Student S1;
    S1.EnterMarks();
    cout<<endl;
    S1.ShowPercentage();
    return 0;
}
