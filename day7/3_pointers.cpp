#include<iostream>
using namespace std;
int main()
{
    //variable
    int a=10;
    cout<<"address of a:"<<&a<<endl;
    int *ptr=&a;
    cout<<"ptr value:"<<ptr<<endl;
    cout<<"ptr adress:"<<&ptr<<endl;
    cout<<"value of using a:"<<a<<endl;
    cout<<"value of using ptr:"<<*ptr<<endl;
    cout<<"value of a:"<<*(&a)<<endl;

    cout<<"value of a:"<<*(*(&ptr))<<endl;
    cout<<"value of a:"<<*(&(*ptr))<<endl;
     
}