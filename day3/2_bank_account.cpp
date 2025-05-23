
#include<iostream>
using namespace std;
class BankAccount
{
public:    
    string Holder_name;
    int ac_no;
    BankAccount()
    {
    cout<<"constructor is called automatically"<<endl;
    }

};
int main()
{
    BankAccount b1;
  
    return 0;

}