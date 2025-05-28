#include<iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;
    int weight;
public:
    person(string name, int age, int weight) :name(name),age(age)
    {
        cout<<"person"<<endl;
    }
};
class Employee : public person
{
protected;
    int emp_id;
public:
    employee(string name, int age, int weight, int emp_id) : person(name, age, weight), emp_id(emp_id)
    {
        cout<<"employee constructor"<<endl;
    }
};
class manager : public Employee
{
    int salary;
public:
    manager(string name, int age, int weight, int emp_id) : person(name, age, weight), emp_id(emp_id)
    void display()
    {

    }
}
        this->name=name;
        this->age=age;
        this->weight=weight;
        this->roll_num=roll_num;
    }
    void display()
    {
        cout<<"Student details:"<<endl;
        cout<<"Manager  Name:"<<name<<endl;
        cout<< manager Age:"<<age<<endl;
        cout<<"Manager Weight:"<<weight<<endl;
        cout<<"Student Roll number:"<<roll_num<<endl;
    }
};
int main()
{
    Student s1("SABY",26,66,243);
    s1.display();
}
