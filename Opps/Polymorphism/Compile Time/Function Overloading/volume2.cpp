<<<<<<< HEAD
#include<iostream>
using namespace std;

class Test
{
    public:
    void volume(int l)
    {
        cout << "Volume of Cube        : " << l*l*l << endl;
    }

    void volume(double r)
    {
        float pia=3.14;
        cout << "Volume Sphere Shape    : " << (4/3)*pia*r*r*r << endl;
    }


    void volume(double r , double h)
    {
        float pie=3.14;
        cout << "Volume Cone Shape      : " << pie*r*r*(h/3) << endl;
    }

    void volume(int r , int h)
    {
        float pia=3.14;
        cout << "Volume Cylinder Shape  : " << pia*r*r*h << endl;
    }

    void volume(int l, int b , int h)
    {
        cout << "Volume Solid Shape     : " << l*b*h << endl;
    }



};

int main()
{
    Test t;
    t.volume(10);
    t.volume(15.5);
    t.volume(10,15);
    t.volume(20.5,10.5);
    t.volume(5,10,15);
}

/*

Volume Cube Shape      : 1000
Volume Sphere Shape    : 11693
Volume Cylinder Shape  : 4710
Volume Cone Shape      : 4618.55
Volume Solid Shape     : 750

=======
#include<iostream>
using namespace std;

class Test
{
    public:
    void volume(int l)
    {
        cout << "Volume of Cube        : " << l*l*l << endl;
    }

    void volume(double r)
    {
        float pia=3.14;
        cout << "Volume Sphere Shape    : " << (4/3)*pia*r*r*r << endl;
    }


    void volume(double r , double h)
    {
        float pie=3.14;
        cout << "Volume Cone Shape      : " << pie*r*r*(h/3) << endl;
    }

    void volume(int r , int h)
    {
        float pia=3.14;
        cout << "Volume Cylinder Shape  : " << pia*r*r*h << endl;
    }

    void volume(int l, int b , int h)
    {
        cout << "Volume Solid Shape     : " << l*b*h << endl;
    }



};

int main()
{
    Test t;
    t.volume(10);
    t.volume(15.5);
    t.volume(10,15);
    t.volume(20.5,10.5);
    t.volume(5,10,15);
}

/*

Volume Cube Shape      : 1000
Volume Sphere Shape    : 11693
Volume Cylinder Shape  : 4710
Volume Cone Shape      : 4618.55
Volume Solid Shape     : 750

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/