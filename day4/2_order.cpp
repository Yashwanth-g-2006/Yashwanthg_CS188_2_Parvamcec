

#include<iostream>
using namespace std;
class bankname 
{
    private:
    string name;
    public:
    //constructor
    bankname(string name)
    {
        this->name=name;
        cout<<"constructor called for:"<<this->name<<endl;

    }
    
      ~bankname()
      {
        cout<<"destructor called for:" <<name <<endl;

      }
    };
    int main()
    {
    bankname b1("canara bank");
    bankname b2("icici bank");
    bankname b3("sbi bank");
    return 0;
    }

