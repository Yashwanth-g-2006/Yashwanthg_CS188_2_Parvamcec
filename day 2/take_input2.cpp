// pure function is doesnot have any body
//
#include<iostream>
using namespace std;
int main()
{
    int age=0;
    float marks=0;
    char gender;
    string name;
    cout<<"enter a student age:"<<endl;
    cin>>age;
    cout<<"enter a marks of student:"<<endl;
    cin>>marks;
    cout<<"enter a student gender:"<<endl;
    cin>>gender;
    cin.ignore();
    cout<<"enter a student name:"<<endl;
    cin>>name;
    cout<<"student details:"<<endl;
    cout<<"name:"<<name<<endl;
    cout<<"gender:"<<gender<<endl;
    cout<<"age:"<<age<<endl;
    cout<<"marks:"<<marks<<endl;
    return 0;
}
