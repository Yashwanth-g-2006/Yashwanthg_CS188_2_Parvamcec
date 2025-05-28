#include<iostream>
using namespace std;
class person
{
protected:
string name;
    int age;
    int weight;
public:
    person()
    {
        cout<<"person constructor"<<endl;
    }
};
class Student : public person
{
    int roll_num;
public:
    Student(string name, int age, int weight, int roll_num)
    {
        cout<<"Student constructor"<<endl;
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_num=roll_num;
    }
    void display()
    {
        cout<<"Student details:"<<endl;
        cout<<"Student Name:"<<name<<endl;
        cout<<"Student Age:"<<age<<endl;
        cout<<"Student Weight:"<<weight<<endl;
        cout<<"Student Roll number:"<<roll_num<<endl;
    }
};
int main()
{
    Student s1("sandesh",23,59,243);
    s1.display();
}