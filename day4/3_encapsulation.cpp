
#include<iostream>
using namespace std;
class Student
{
private:
    string name;
    int roll_num;
public:
    string getname()
    {
        return this->name;
    }
    int getrollnum()
    {
        return this->roll_num;
    }
    void setname(string name)
    {
        this->name = name;
    }
    void setrollnum(int roll)
    {
        this->roll_num = roll;
    }
};
int main()
{
    Student s1;
    s1.setname("sanjay");
    s1.setrollnum(136);
    cout << "name is: " << s1.getname() << endl;
    cout << "roll num is:" << s1.getrollnum() << endl; 
    return 0;
}