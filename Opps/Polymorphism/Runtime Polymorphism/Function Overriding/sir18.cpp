<<<<<<< HEAD
// Runtime Polymorphism

#include<iostream>
using namespace std;
class base
{
    public:
    void hello()
    {
        cout << "Base Class Hello" << endl;
    }
};

class derived : public base
{
    public:
    void hello()
    {
         cout << "Derived Class Hello" << endl;
    }
};

int main()
{
    derived d;
    d.hello();

    base a;
    a.hello();

}

/*

Derived C Hello
Base Class Hello

=======
// Runtime Polymorphism

#include<iostream>
using namespace std;
class base
{
    public:
    void hello()
    {
        cout << "Base Class Hello" << endl;
    }
};

class derived : public base
{
    public:
    void hello()
    {
         cout << "Derived Class Hello" << endl;
    }
};

int main()
{
    derived d;
    d.hello();

    base a;
    a.hello();

}

/*

Derived C Hello
Base Class Hello

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/