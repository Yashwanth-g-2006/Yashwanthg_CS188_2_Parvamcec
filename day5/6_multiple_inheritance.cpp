#include<iostream>
using namespace std;
class camera
{
    int resolution;
public:
    camera(int res) : resolution(res)
    {
        cout<<"camera constructor:"<<endl;
    }
    void display_camera()
    {
        cout<<"camera resolution:"<<resolution<<endl;
    }
};
class phone
{
    double phone_number;
public:
    phone(double p_num) : phone_number(p_num)
    {
        cout<<"phone constructor:"<<endl;
    }
    void dis_phone()
    {
        cout<<"phone number:"<<phone_number<<endl;   
    }
};
class Smartphone : public phone, public camera
{
    int network_speed;
public:
    Smartphone(int res, double p_num, int network) : phone(p_num), camera(res), network_speed(network)
    {
        cout<<"Smartphone constructor:"<<endl;
    }
    void dis_Smart_phone()
    {
        cout<<"Smartphone details:"<<endl;
        display_camera();
        dis_phone();
        cout<<"Network speed:"<<network_speed<<endl;
    }
};
int main()
{
    Smartphone s1(108, 11111111111,35);
    s1.dis_Smart_phone();
    return 0;
}