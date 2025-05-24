#include<iostream>
using namespace std;
class Bankaccount
{
private:
    string holdername;
    int accnum;
public:
    string getholdername()
    {
        return this->holdername;
    }
    int getaccnum()
    {
        return this->accnum;
    }
    void setholdername(string holdername)
    {
        this->holdername = holdername;
    }
    void setaccnum(int acc)
    {
        this->accnum = acc;
    }
};
int main()
{
   Bankaccount B1;
    B1.setholdername("prajwal");
    B1.setaccnum(100);
    cout << "holdername is: " << B1.getholdername() << endl;
    cout << "account name is:" << B1.getaccnum() << endl; 
    return 0;
}