#include<iostream>
using namespace std;
class BankAccount
{
public:    
    string Holder_name;
    int ac_no;
    
    
 BankAccount(string name,int ac_no)
    {
    cout<<"constructor is called automatically"<<endl;
    this->Holder_name=name;
    this->ac_no=ac_no;
    }
    BankAccount(BankAccount &b1)
    {
     this->Holder_name =b1.Holder_name;
     this->ac_no=b1.ac_no;


    }
    void display()
    {
        cout<<"Holder name:"<<this->Holder_name<<endl;
        cout<<"Account number:"<<ac_no<<endl;
        
    }


};

int main()
{
    BankAccount b1("mohan", 102);
    
    b1.display();
    BankAccount b2=b1;
    b2.display(); 
    return 0;
}