<<<<<<< HEAD
#include<iostream>
using namespace std;

class Test
{
    public:
    Test(int a)
    {
        cout << "Area square Shape     : " << a*a << endl;
    }

    Test(double r)
    {
        float pie=3.14;
        cout << "Area Circle Shape      : " << pie*r*r << endl;
    }

    Test(double b , double h)
    {
        cout << "Area triangle Shape  : " << h*b/2 << endl;
    }

    Test(double a, double b , double h)
    {
        cout << "Area Trapezium Shape    : " << a+b/2*h << endl;
    }

    Test(int p, int q)
    {
        cout << "Area Rhombus Shape      : " << p*q/2 << endl;
    }

};

int main()
{
    Test a(15) , b(10) , c(15,20) , d(10,15,20) , e(10,10) ;
=======
#include<iostream>
using namespace std;

class Test
{
    public:
    Test(int a)
    {
        cout << "Area square Shape     : " << a*a << endl;
    }

    Test(double r)
    {
        float pie=3.14;
        cout << "Area Circle Shape      : " << pie*r*r << endl;
    }

    Test(double b , double h)
    {
        cout << "Area triangle Shape  : " << h*b/2 << endl;
    }

    Test(double a, double b , double h)
    {
        cout << "Area Trapezium Shape    : " << a+b/2*h << endl;
    }

    Test(int p, int q)
    {
        cout << "Area Rhombus Shape      : " << p*q/2 << endl;
    }

};

int main()
{
    Test a(15) , b(10) , c(15,20) , d(10,15,20) , e(10,10) ;
>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
}