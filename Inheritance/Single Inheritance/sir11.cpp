<<<<<<< HEAD
// Single Inheritance

#include<iostream>
using namespace std;
class base
{
    protected:
    int a;

    public:
    void hello()
    {
        cout << "Hello" << endl;
    }
};

class derived : public base
{
    public:
    void world()
    {
        hello();
        a = 101;
        cout << "World : " << a << endl;
    }
};

int main()
{
    derived d;
    // d.hello();
    d.world();
}

/*

Hello      
World : 101

*/


// Factorial Number
// Student Result
// 1 4 12 32 80 ....
=======
// Single Inheritance

#include<iostream>
using namespace std;
class base
{
    protected:
    int a;

    public:
    void hello()
    {
        cout << "Hello" << endl;
    }
};

class derived : public base
{
    public:
    void world()
    {
        hello();
        a = 101;
        cout << "World : " << a << endl;
    }
};

int main()
{
    derived d;
    // d.hello();
    d.world();
}

/*

Hello      
World : 101

*/


// Factorial Number
// Student Result
// 1 4 12 32 80 ....
>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
