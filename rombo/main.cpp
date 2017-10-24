#include <iostream>

using namespace std;

class vehiculo{
public:
    string license;
    int year;
    vehiculo(const string & mylicense,const int myyear):license(mylicense),year(myyear){}

};
class carro: virtual public vehiculo{
public:
    string style;
    carro(const string & mylicense,const int myyear,const string & mystyle):vehiculo(mylicense,myyear),style(mystyle){}
};
class camion: virtual public vehiculo{
public:
    int weight;
    camion(const string & mylicense,const int myyear,const int myweight):vehiculo(mylicense,myyear),weight(myweight){}
};
class minicamion:public carro,public camion{
public:
    minicamion(const string & mylicense,const int myyear,const int myweight,const string & mystyle):vehiculo(mylicense,myyear),carro(mylicense,myyear,mystyle),camion(mylicense,myyear,myweight){}
};
int main()
{
    vehiculo a=vehiculo("abc",1990);
    carro b=carro("abc",1990,"abc");
    camion c=camion("abc",1990,5000);
    minicamion d=minicamion("abc",1990,5000,"abc");
    cout << d.year<<endl;
    cout << d.license<<endl;
    //cout << "Hello world!" << endl;
    return 0;
}
