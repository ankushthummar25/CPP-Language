<<<<<<< HEAD
// Runtime Polymorphism
// Virtual Function

#include<iostream>
using namespace std;
class base
{
    public:
    virtual void hello()
    {
        cout << "Base Class Hello" << endl;
    }
};

class derived : public base
{
    public:
    void hello()
    {
         cout << "Derived class Hello" << endl;
    }
};

int main()
{
    base *p,b;
    derived d;

    p = &b;
    p-> hello();

    p = &d;
    p-> hello();

}

/*

Base Class Hello
Derived class Hello

=======
// Runtime Polymorphism
// Virtual Function

#include<iostream>
using namespace std;
class base
{
    public:
    virtual void hello()
    {
        cout << "Base Class Hello" << endl;
    }
};

class derived : public base
{
    public:
    void hello()
    {
         cout << "Derived class Hello" << endl;
    }
};

int main()
{
    base *p,b;
    derived d;

    p = &b;
    p-> hello();

    p = &d;
    p-> hello();

}

/*

Base Class Hello
Derived class Hello

>>>>>>> bd1e6c5424fdab344ee1d842c787832283ad2717
*/