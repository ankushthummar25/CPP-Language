<<<<<<< HEAD
#include<iostream>
using namespace std;

class Test
{
    public:
    Test(int l, int b , int h)
    {
        cout << "Volume Solid Shape     : " << l*b*h << endl;
    }

    Test(double r , double h)
    {
        float pie=3.14;
        cout << "Volume Cone Shape      : " << pie*r*r*(h/3) << endl;
    }

    Test(int r , int h)
    {
        float pia=3.14;
        cout << "Volume Cylinder Shape  : " << pia*r*r*h << endl;
    }

    Test(double r)
    {
        float pia=3.14;
        cout << "Volume Sphere Shape    : " << (4/3)*pia*r*r*r << endl;
    }

    Test(int l)
    {
        cout << "Volume Cube Shape      : " << l*l*l << endl;
    }

};

int main()
{
    Test a(10,15,20) , b(15,10) , c(15,20) , d(10) , e(15) ;
=======
#include<iostream>
using namespace std;

class Test
{
    public:
    Test(int l, int b , int h)
    {
        cout << "Volume Solid Shape     : " << l*b*h << endl;
    }

    Test(double r , double h)
    {
        float pie=3.14;
        cout << "Volume Cone Shape      : " << pie*r*r*(h/3) << endl;
    }

    Test(int r , int h)
    {
        float pia=3.14;
        cout << "Volume Cylinder Shape  : " << pia*r*r*h << endl;
    }

    Test(double r)
    {
        float pia=3.14;
        cout << "Volume Sphere Shape    : " << (4/3)*pia*r*r*r << endl;
    }

    Test(int l)
    {
        cout << "Volume Cube Shape      : " << l*l*l << endl;
    }

};

int main()
{
    Test a(10,15,20) , b(15,10) , c(15,20) , d(10) , e(15) ;
>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
}