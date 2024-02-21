<<<<<<< HEAD
#include<iostream>
using namespace std;

class Test
{
    public:
    void area(int a)
    {
        cout << "Area square Shape      : " << a*a << endl;
    }

    void area(double r)
    {
        float pie=3.14;
        cout << "Area Circle Shape      : " << pie*r*r << endl;
    }

    void area(int p, int q)
    {
        cout << "Area Rhombus Shape     : " << p*q/2 << endl;
    }

    void area(double b , double h)
    {
        cout << "Area triangle Shape    : " << h*b/2 << endl;
    }

    void area(double a, double b , double h)
    {
        cout << "Area Trapezium Shape   : " << a+b/2*h << endl;
    }


};

int main()
{
    Test t;
    t.area(10);
    t.area(5.5);
    t.area(12,15);
    t.area(20.5,30.5);
    t.area(40,50,100);
}

/*

Area square Shape      : 100
Area Circle Shape      : 94.985
Area Rhombus Shape     : 90
Area triangle Shape    : 312.625
Area Trapezium Shape   : 2540

=======
#include<iostream>
using namespace std;

class Test
{
    public:
    void area(int a)
    {
        cout << "Area square Shape      : " << a*a << endl;
    }

    void area(double r)
    {
        float pie=3.14;
        cout << "Area Circle Shape      : " << pie*r*r << endl;
    }

    void area(int p, int q)
    {
        cout << "Area Rhombus Shape     : " << p*q/2 << endl;
    }

    void area(double b , double h)
    {
        cout << "Area triangle Shape    : " << h*b/2 << endl;
    }

    void area(double a, double b , double h)
    {
        cout << "Area Trapezium Shape   : " << a+b/2*h << endl;
    }


};

int main()
{
    Test t;
    t.area(10);
    t.area(5.5);
    t.area(12,15);
    t.area(20.5,30.5);
    t.area(40,50,100);
}

/*

Area square Shape      : 100
Area Circle Shape      : 94.985
Area Rhombus Shape     : 90
Area triangle Shape    : 312.625
Area Trapezium Shape   : 2540

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/