#include<iostream>
using namespace std;
class student
{
    private:
    string name;
    public:
    //constructor
    student(string name)
    {
        this->name=name;
        cout<<"constructor called for:"<<this->name<<endl;

    }
    
      ~student()
      {
        cout<<"destructor called for:" <<name <<endl;

      }
    };
    int main()
    {
    student s1("sandy");
    student s2("sanjay");
    student s3("prajwal");
    return 0;
    }